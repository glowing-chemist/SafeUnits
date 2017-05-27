#ifndef SIUNITS_LIBRARY_H
#define SIUNITS_LIBRARY_H

#include <utility>
#include <ratio>
#include <iostream>

template<typename base_type, typename ratio, int metres, int kilograms, int seconds, int ampere, int kelvin, int mole, int candela>
class base_unit {
public:
    constexpr explicit base_unit(base_type);

    template<typename base_type2, typename ratio2>
    constexpr base_unit& operator=(const base_unit<base_type2, ratio2, metres, kilograms, seconds, ampere, kelvin, mole, candela>&);

    explicit constexpr operator base_type() const;

private:
    base_type d;
};

#endif