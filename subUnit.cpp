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