//
// Created by ollie on 27/05/17.
//
#ifndef SUBUNIT
#define SUBUNIT

#include <ratio>

#include "library.cpp"

template<typename T>
using MegaMeter = base_unit<T, std::ratio<1000000>, 1, 0, 0, 0, 0, 0, 0>;

template<typename T>
using KiloMeter = base_unit<T, std::ratio<1000>, 1, 0, 0, 0, 0, 0, 0>;

template<typename T>
using CentiMeter = base_unit<T, std::ratio<1, 100>, 1, 0, 0, 0, 0, 0, 0>;

template<typename T>
using MilliMeter = base_unit<T, std::ratio<1, 1000>, 1, 0, 0, 0, 0, 0, 0>;

template<typename T>
using MicroMeter = base_unit<T, std::ratio<1, 1000000>, 1, 0, 0, 0, 0, 0, 0>;

template<typename T>
using NanoMeter = base_unit<T, std::ratio<1, 1000000000>, 1, 0, 0, 0, 0, 0, 0>;

template<typename T>
using Wavenumbers = base_unit<T, std::ratio<1, 100>, -1, 0, 0, 0, 0, 0, 0>;

//#############################################################################

template<typename T>
using Gram = base_unit<T, std::ratio<1, 1000>, 0, 1, 0, 0, 0, 0, 0>;

//#############################################################################

template<typename T>
using MilliSeconds = base_unit<T, std::ratio<1, 1000>, 0, 0, 1, 0, 0, 0, 0>;

template<typename T>
using MicroSeconds = base_unit<T, std::ratio<1, 1000000>, 0, 0, 1, 0, 0, 0, 0>;

template<typename T>
using NanoSeconds = base_unit<T, std::ratio<1, 1000000000>, 0, 0, 1, 0, 0, 0, 0>;

template<typename T>
using Minutes = base_unit<T, std::ratio<60, 1>, 0, 0, 1, 0, 0, 0, 0>;

template<typename T>
using Hours = base_unit<T, std::ratio<3600, 1>, 0, 0, 1, 0, 0, 0, 0>;

template<typename T>
using Days = base_unit<T, std::ratio<86400, 1>, 0, 0, 1, 0, 0, 0, 0>;

//##############################################################################

template<typename T>
using MicroAmpere = base_unit<T, std::ratio<1, 1000000>, 0, 0, 0, 1, 0, 0, 0>;

template<typename T>
using MilliAmpere = base_unit<T, std::ratio<1, 1000>, 0, 0, 0, 1, 0, 0, 0>;

template<typename T>
using KiloAmpere = base_unit<T, std::ratio<1000, 1>, 0, 0, 0, 1, 0, 0, 0>;

template<typename T>
using MegaAmpere = base_unit<T, std::ratio<1000000, 1>, 0, 0, 0, 1, 0, 0, 0>;

//##############################################################################

template<typename T>
using MilliKelvin = base_unit<T, std::ratio<1, 1000>, 0, 0, 0, 0, 1, 0, 0>;

//##############################################################################

template<typename T>
using MilliMole = base_unit<T, std::ratio<1, 1000>, 0, 0, 0, 0, 0, 1, 0>;

template<typename T>
using MicroMole = base_unit<T, std::ratio<1, 1000000>, 0, 0, 0, 0, 0, 1, 0>;

//#############################################################################

template<typename T>
using KiloHertz = base_unit<T, std::ratio<1000, 1>, 0, 0, -1, 0, 0, 0, 0>;

template<typename T>
using MegaHertz = base_unit<T, std::ratio<1000000, 1>, 0, 0, -1, 0, 0, 0, 0>;

template<typename T>
using GigaHertz = base_unit<T, std::ratio<1000000000, 1>, 0, 0, -1, 0, 0, 0, 0>;

//##############################################################################

#endif