#include "library.h"

#include <iostream>

template<typename base_type, typename ratio, int metres, int kilograms, int seconds, int ampere, int kelvin, int mole, int candela>
constexpr base_unit<base_type, ratio, metres, kilograms, seconds, ampere, kelvin, mole, candela>::base_unit(base_type val) :
        d{val} {};

template<typename base_type, typename ratio, int metres, int kilograms, int seconds, int ampere, int kelvin, int mole, int candela>
constexpr base_unit<base_type, ratio, metres, kilograms, seconds, ampere, kelvin, mole, candela>::operator base_type() const {
    return d;
};


template<typename base_type1, typename base_type2, typename ratio1, typename ratio2, int metres, int kilograms, int seconds, int ampere, int kelvin, int mole, int candela>
auto operator+(base_unit<base_type1, ratio1, metres, kilograms, seconds, ampere, kelvin, mole, candela>& lhs,
               base_unit<base_type2, ratio2, metres, kilograms, seconds, ampere, kelvin, mole, candela>& rhs) {
    return base_unit<typename std::conditional<(sizeof(base_type1) > sizeof(base_type2)), base_type1, base_type2>::type ,
            typename std::conditional<std::ratio_greater<ratio1, ratio2>::value, ratio1 , ratio2>::type, metres, kilograms, seconds, ampere, kelvin, mole, candela>((
            ratio1::num * base_type1(lhs) / ratio1::den) + (ratio2::num * base_type2(rhs) / ratio2::den));
};

template<typename base_type1, typename base_type2, typename ratio1, typename ratio2, int metres, int kilograms, int seconds, int ampere, int kelvin, int mole, int candela>
auto operator-(base_unit<base_type1, ratio1, metres, kilograms, seconds, ampere, kelvin, mole, candela>& lhs,
               base_unit<base_type2, ratio2, metres, kilograms, seconds, ampere, kelvin, mole, candela>& rhs) {
    return base_unit<typename std::conditional<(sizeof(base_type1) > sizeof(base_type2)), base_type1, base_type2>::type ,
            typename std::conditional<std::ratio_greater<ratio1, ratio2>::value, ratio1 , ratio2>::type, metres, kilograms, seconds, ampere, kelvin, mole, candela>((
            ratio1::num * base_type1(lhs) / ratio1::den) - (ratio2::num * base_type2(rhs) / ratio2::den));
};

template<typename base_type1, typename ratio1, typename ratio2, int metres1, int kilograms1, int seconds1, int amperes1, int kelvin1, int moles1, int candela1
        ,typename base_type2, int metres2, int kilograms2, int seconds2, int amperes2, int kelvin2, int moles2, int candela2>
auto operator*(base_unit<base_type1, ratio1, metres1, kilograms1, seconds1, amperes1, kelvin1, moles1, candela1>& lhs
        ,base_unit<base_type2, ratio2, metres2, kilograms2, seconds2, amperes2, kelvin2, moles2, candela2>& rhs) {
    return base_unit<typename std::conditional<(sizeof(base_type1) > sizeof(base_type2)), base_type1, base_type2>::type ,
            typename std::conditional<std::ratio_greater<ratio1, ratio2>::value, ratio1 , ratio2>::type, metres1 + metres2, kilograms1 + kilograms2, seconds1 + seconds2, amperes1 + amperes2, kelvin1 + kelvin2, moles1 + moles2, candela1 + candela2> ((
            ratio1::num * base_type1(lhs) / ratio1::den) * (ratio2::num * base_type2(rhs) / ratio2::den));
};

template<typename base_type1, typename ratio1, typename ratio2, int metres1, int kilograms1, int seconds1, int amperes1, int kelvin1, int moles1, int candela1
        ,typename base_type2, int metres2, int kilograms2, int seconds2, int amperes2, int kelvin2, int moles2, int candela2>
auto operator/(base_unit<base_type1, ratio1, metres1, kilograms1, seconds1, amperes1, kelvin1, moles1, candela1>& lhs
        ,base_unit<base_type2, ratio2, metres2, kilograms2, seconds2, amperes2, kelvin2, moles2, candela2>& rhs)
 {
    return base_unit<typename std::conditional<(sizeof(base_type1) > sizeof(base_type2)), base_type1, base_type2>::type ,
             typename std::conditional<std::ratio_greater<ratio1, ratio2>::value, ratio1 , ratio2>::type, metres1 - metres2, kilograms1 - kilograms2, seconds1 - seconds2, amperes1 - amperes2, kelvin1 - kelvin2, moles1 - moles2, candela1 - candela2> (
            (ratio1::num * base_type1(lhs) / ratio1::den) / (ratio2::num * base_type2(rhs) / ratio2::den));
};

template<typename base_type, typename ratio1, int metres, int kilograms, int seconds, int ampere, int kelvin, int mole, int candela>
template<typename base_type2, typename ratio2>
constexpr base_unit<base_type, ratio1, metres, kilograms, seconds, ampere, kelvin, mole, candela>&
base_unit<base_type, ratio1, metres, kilograms, seconds, ampere, kelvin, mole, candela>::operator=(const base_unit<base_type2, ratio2, metres, kilograms, seconds, ampere, kelvin, mole, candela>& rhs) {
    d = (ratio1::num * ((ratio2::num * base_type2(rhs) / ratio2::dem)) / ratio1::dem);
};

//#####################################################
//SI units

template<typename T>
using Meters = base_unit<T, std::ratio<1>, 1, 0, 0, 0, 0, 0, 0>;

template<typename T>
using Kilograms = base_unit<T, std::ratio<1>, 0, 1, 0, 0, 0, 0, 0>;

template<typename T>
using Second = base_unit<T, std::ratio<1>, 0, 0, 1, 0, 0, 0, 0>;

template<typename T>
using Ampere = base_unit<T, std::ratio<1>, 0, 0, 0, 1, 0, 0, 0>;

template<typename T>
using Kelvin = base_unit<T, std::ratio<1>, 0, 0, 0, 0, 1, 0, 0>;

template<typename T>
using Mole = base_unit<T, std::ratio<1>, 0, 0, 0, 0, 0, 1, 0>;

template<typename T>
using Candela = base_unit<T, std::ratio<1>, 0, 0, 0, 0, 0, 0, 1>;

//#######################################################
//Composite units

template<typename T>
using Hertz = base_unit<T, std::ratio<1>, 0, 0, -1, 0, 0, 0, 0>;

template<typename T>
using Velocity = base_unit<T, std::ratio<1>, 1, 0, -1, 0, 0, 0, 0>;

template<typename T>
using Acceleration = base_unit<T, std::ratio<1>, 1, 0, -2, 0, 0, 0, 0>;

template<typename T>
using Volts = base_unit<T, std::ratio<1>, 2, 1, -3, -1, 0, 0, 0>;

template<typename T>
using Coloumb = base_unit<T, std::ratio<1>, 0, 0, 1, 1, 0, 0, 0>;

template<typename T>
using Concentration = base_unit<T, std::ratio<1>, -3, 0, 0, 0, 0, 1, 0>;

template<typename T>
using Density = base_unit<T, std::ratio<1>, -3, 1, 0, 0, 0, 0, 0>;

//########################################################
//Pretty printing

template<typename base_type, typename ratio, int metres, int kilograms, int seconds, int ampere, int kelvin, int mole, int candela>
std::ostream& operator<<(std::ostream& cout, base_unit<base_type, ratio, metres, kilograms, seconds, ampere, kelvin, mole, candela>& rhs) {
    cout << base_type(rhs) << ' ';
    //can all be made constexpr in c++17!!!
    if (metres != 0) {
        cout << "M^" << metres << ' ';
    } if(kilograms != 0) {
        cout << "Kg^" << kilograms << ' ';
    } if(seconds != 0) {
        cout << "S^" << seconds << ' ';
    } if(ampere != 0) {
        cout << "A^" << ampere << ' ';
    } if(kelvin != 0) {
        cout << "K^" << kelvin << ' ';
    } if(mole != 0) {
        cout << "M^" << mole << ' ';
    } if(candela != 0) {
        cout << "Cd" << candela << ' ';
    }
    return cout;
};