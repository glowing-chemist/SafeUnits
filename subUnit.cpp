//
// Created by ollie on 27/05/17.
//
#include <ratio>

#include "library.cpp"

template<typename T>
using Megameter = base_unit<T, std::ratio<1000000>, 1, 0, 0, 0, 0, 0, 0>;

template<typename T>
using Kilometer = base_unit<T, std::ratio<1000>, 1, 0, 0, 0, 0, 0, 0>;

template<typename T>
using Centimeter = base_unit<T, std::ratio<1, 100>, 1, 0, 0, 0, 0, 0, 0>;

template<typename T>
using Millimeter = base_unit<T, std::ratio<1, 1000>, 1, 0, 0, 0, 0, 0, 0>;

template<typename T>
using Micrometer = base_unit<T, std::ratio<1, 1000000>, 1, 0, 0, 0, 0, 0, 0>;

template<typename T>
using Nanometer = base_unit<T, std::ratio<1, 1000000000>, 1, 0, 0, 0, 0, 0, 0>;

template<typename T>
using Wavenumbers = base_unit<T, std::ratio<1, 100>, -1, 0, 0, 0, 0, 0, 0>;

//#############################################################################

template<typename T>
using Gram = base_unit<T, std::ratio<1, 1000>, 0, 1, 0, 0, 0, 0, 0>;

//#############################################################################

template<typename T>
using Milliseconds = base_unit<T, std::ratio<1, 1000>, 0, 0, 1, 0, 0, 0, 0>;

template<typename T>
using Microseconds = base_unit<T, std::ratio<1, 1000000>, 0, 0, 1, 0, 0, 0, 0>;

template<typename T>
using Nanoseconds = base_unit<T, std::ratio<1, 1000000000>, 0, 0, 1, 0, 0, 0, 0>;

template<typename T>
using Minutes = base_unit<T, std::ratio<60, 1>, 0, 0, 1, 0, 0, 0, 0>;

template<typename T>
using Hours = base_unit<T, std::ratio<3600, 1>, 0, 0, 1, 0, 0, 0, 0>;

template<typename T>
using Days = base_unit<T, std::ratio<86400, 1>, 0, 0, 1, 0, 0, 0, 0>;

//##############################################################################

template<typename T>
using Microampere = base_unit<T, std::ratio<1, 1000000>, 0, 0, 0, 1, 0, 0, 0>;

template<typename T>
using Milliampere = base_unit<T, std::ratio<1, 1000>, 0, 0, 0, 1, 0, 0, 0>;

template<typename T>
using Kiloampere = base_unit<T, std::ratio<1000, 1>, 0, 0, 0, 1, 0, 0, 0>;

template<typename T>
using Megaampere = base_unit<T, std::ratio<1000000, 1>, 0, 0, 0, 1, 0, 0, 0>;

//##############################################################################

template<typename T>
using MilliKelvin = base_unit<T, std::ratio<1, 1000>, 0, 0, 0, 0, 1, 0, 0>;

//##############################################################################

template<typename T>
using Millimole = base_unit<T, std::ratio<1, 1000>, 0, 0, 0, 0, 0, 1, 0>;

template<typename T>
using Micromole = base_unit<T, std::ratio<1, 1000000>, 0, 0, 0, 0, 0, 1, 0>;

//#############################################################################

template<typename T>
using Kilohertz = base_unit<T, std::ratio<1000, 1>, 0, 0, -1, 0, 0, 0, 0>;

template<typename T>
using Megahertz = base_unit<T, std::ratio<1000000, 1>, 0, 0, -1, 0, 0, 0, 0>;

template<typename T>
using Gigahertz = base_unit<T, std::ratio<1000000000, 1>, 0, 0, -1, 0, 0, 0, 0>;

//##############################################################################

