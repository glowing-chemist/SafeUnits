#ifndef LITERALS
#define LITERALS

#include "subUnit.cpp"
#include "library.cpp"

NanoMeter<unsigned long long int> operator "" _nM(unsigned long long int val) {
return NanoMeter<unsigned long long int>(val); 
 } 
MicroMeter<unsigned long long int> operator "" _miM(unsigned long long int val) {
return MicroMeter<unsigned long long int>(val); 
 } 
MilliMeter<unsigned long long int> operator "" _mM(unsigned long long int val) {
return MilliMeter<unsigned long long int>(val); 
 } 
CentiMeter<unsigned long long int> operator "" _cm(unsigned long long int val) {
return CentiMeter<unsigned long long int>(val); 
 } 
Meters<unsigned long long int> operator "" _M(unsigned long long int val) {
return Meters<unsigned long long int>(val); 
 } 
KiloMeter<unsigned long long int> operator "" _KM(unsigned long long int val) {
return KiloMeter<unsigned long long int>(val); 
 } 
MegaMeter<unsigned long long int> operator "" _MM(unsigned long long int val) {
return MegaMeter<unsigned long long int>(val); 
 } 
Kilograms<unsigned long long int> operator "" _Kg(unsigned long long int val) {
return Kilograms<unsigned long long int>(val); 
 } 
Gram<unsigned long long int> operator "" _g(unsigned long long int val) {
return Gram<unsigned long long int>(val); 
 } 
MilliSeconds<unsigned long long int> operator "" _mS(unsigned long long int val) {
return MilliSeconds<unsigned long long int>(val); 
 } 
MicroSeconds<unsigned long long int> operator "" _miS(unsigned long long int val) {
return MicroSeconds<unsigned long long int>(val); 
 } 
NanoSeconds<unsigned long long int> operator "" _nS(unsigned long long int val) {
return NanoSeconds<unsigned long long int>(val); 
 } 
Seconds<unsigned long long int> operator "" _S(unsigned long long int val) {
return Seconds<unsigned long long int>(val); 
 } 
Minutes<unsigned long long int> operator "" _min(unsigned long long int val) {
return Minutes<unsigned long long int>(val); 
 } 
Hours<unsigned long long int> operator "" _hrs(unsigned long long int val) {
return Hours<unsigned long long int>(val); 
 } 
Days<unsigned long long int> operator "" _days(unsigned long long int val) {
return Days<unsigned long long int>(val); 
 } 
MicroAmpere<unsigned long long int> operator "" _miA(unsigned long long int val) {
return MicroAmpere<unsigned long long int>(val); 
 } 
MilliAmpere<unsigned long long int> operator "" _mA(unsigned long long int val) {
return MilliAmpere<unsigned long long int>(val); 
 } 
Ampere<unsigned long long int> operator "" _A(unsigned long long int val) {
return Ampere<unsigned long long int>(val); 
 } 
KiloAmpere<unsigned long long int> operator "" _Ka(unsigned long long int val) {
return KiloAmpere<unsigned long long int>(val); 
 } 
MegaAmpere<unsigned long long int> operator "" _MA(unsigned long long int val) {
return MegaAmpere<unsigned long long int>(val); 
 } 
Kelvin<unsigned long long int> operator "" _K(unsigned long long int val) {
return Kelvin<unsigned long long int>(val); 
 } 
MilliKelvin<unsigned long long int> operator "" _mK(unsigned long long int val) {
return MilliKelvin<unsigned long long int>(val); 
 } 
MicroMole<unsigned long long int> operator "" _miMo(unsigned long long int val) {
return MicroMole<unsigned long long int>(val); 
 } 
MilliMole<unsigned long long int> operator "" _mMo(unsigned long long int val) {
return MilliMole<unsigned long long int>(val); 
 } 
Mole<unsigned long long int> operator "" _Mo(unsigned long long int val) {
return Mole<unsigned long long int>(val); 
 } 
Hertz<unsigned long long int> operator "" _Hz(unsigned long long int val) {
return Hertz<unsigned long long int>(val); 
 } 
KiloHertz<unsigned long long int> operator "" _KHz(unsigned long long int val) {
return KiloHertz<unsigned long long int>(val); 
 } 
MegaHertz<unsigned long long int> operator "" _MHz(unsigned long long int val) {
return MegaHertz<unsigned long long int>(val); 
 } 
GigaHertz<unsigned long long int> operator "" _GHz(unsigned long long int val) {
return GigaHertz<unsigned long long int>(val); 
 } 
Wavenumbers<unsigned long long int> operator "" _wn(unsigned long long int val) {
return Wavenumbers<unsigned long long int>(val); 
 } 
NanoMeter<long double> operator "" _nM(long double val) {
return NanoMeter<long double>(val); 
 } 
MicroMeter<long double> operator "" _miM(long double val) {
return MicroMeter<long double>(val); 
 } 
MilliMeter<long double> operator "" _mM(long double val) {
return MilliMeter<long double>(val); 
 } 
CentiMeter<long double> operator "" _cm(long double val) {
return CentiMeter<long double>(val); 
 } 
Meters<long double> operator "" _M(long double val) {
return Meters<long double>(val); 
 } 
KiloMeter<long double> operator "" _KM(long double val) {
return KiloMeter<long double>(val); 
 } 
MegaMeter<long double> operator "" _MM(long double val) {
return MegaMeter<long double>(val); 
 } 
Kilograms<long double> operator "" _Kg(long double val) {
return Kilograms<long double>(val); 
 } 
Gram<long double> operator "" _g(long double val) {
return Gram<long double>(val); 
 } 
MilliSeconds<long double> operator "" _mS(long double val) {
return MilliSeconds<long double>(val); 
 } 
MicroSeconds<long double> operator "" _miS(long double val) {
return MicroSeconds<long double>(val); 
 } 
NanoSeconds<long double> operator "" _nS(long double val) {
return NanoSeconds<long double>(val); 
 } 
Seconds<long double> operator "" _S(long double val) {
return Seconds<long double>(val); 
 } 
Minutes<long double> operator "" _min(long double val) {
return Minutes<long double>(val); 
 } 
Hours<long double> operator "" _hrs(long double val) {
return Hours<long double>(val); 
 } 
Days<long double> operator "" _days(long double val) {
return Days<long double>(val); 
 } 
MicroAmpere<long double> operator "" _miA(long double val) {
return MicroAmpere<long double>(val); 
 } 
MilliAmpere<long double> operator "" _mA(long double val) {
return MilliAmpere<long double>(val); 
 } 
Ampere<long double> operator "" _A(long double val) {
return Ampere<long double>(val); 
 } 
KiloAmpere<long double> operator "" _Ka(long double val) {
return KiloAmpere<long double>(val); 
 } 
MegaAmpere<long double> operator "" _MA(long double val) {
return MegaAmpere<long double>(val); 
 } 
Kelvin<long double> operator "" _K(long double val) {
return Kelvin<long double>(val); 
 } 
MilliKelvin<long double> operator "" _mK(long double val) {
return MilliKelvin<long double>(val); 
 } 
MicroMole<long double> operator "" _miMo(long double val) {
return MicroMole<long double>(val); 
 } 
MilliMole<long double> operator "" _mMo(long double val) {
return MilliMole<long double>(val); 
 } 
Mole<long double> operator "" _Mo(long double val) {
return Mole<long double>(val); 
 } 
Hertz<long double> operator "" _Hz(long double val) {
return Hertz<long double>(val); 
 } 
KiloHertz<long double> operator "" _KHz(long double val) {
return KiloHertz<long double>(val); 
 } 
MegaHertz<long double> operator "" _MHz(long double val) {
return MegaHertz<long double>(val); 
 } 
GigaHertz<long double> operator "" _GHz(long double val) {
return GigaHertz<long double>(val); 
 } 
Wavenumbers<long double> operator "" _wn(long double val) {
return Wavenumbers<long double>(val); 
 } 
NanoMeter<char> operator "" _nM(char val) {
return NanoMeter<char>(val); 
 } 
MicroMeter<char> operator "" _miM(char val) {
return MicroMeter<char>(val); 
 } 
MilliMeter<char> operator "" _mM(char val) {
return MilliMeter<char>(val); 
 } 
CentiMeter<char> operator "" _cm(char val) {
return CentiMeter<char>(val); 
 } 
Meters<char> operator "" _M(char val) {
return Meters<char>(val); 
 } 
KiloMeter<char> operator "" _KM(char val) {
return KiloMeter<char>(val); 
 } 
MegaMeter<char> operator "" _MM(char val) {
return MegaMeter<char>(val); 
 } 
Kilograms<char> operator "" _Kg(char val) {
return Kilograms<char>(val); 
 } 
Gram<char> operator "" _g(char val) {
return Gram<char>(val); 
 } 
MilliSeconds<char> operator "" _mS(char val) {
return MilliSeconds<char>(val); 
 } 
MicroSeconds<char> operator "" _miS(char val) {
return MicroSeconds<char>(val); 
 } 
NanoSeconds<char> operator "" _nS(char val) {
return NanoSeconds<char>(val); 
 } 
Seconds<char> operator "" _S(char val) {
return Seconds<char>(val); 
 } 
Minutes<char> operator "" _min(char val) {
return Minutes<char>(val); 
 } 
Hours<char> operator "" _hrs(char val) {
return Hours<char>(val); 
 } 
Days<char> operator "" _days(char val) {
return Days<char>(val); 
 } 
MicroAmpere<char> operator "" _miA(char val) {
return MicroAmpere<char>(val); 
 } 
MilliAmpere<char> operator "" _mA(char val) {
return MilliAmpere<char>(val); 
 } 
Ampere<char> operator "" _A(char val) {
return Ampere<char>(val); 
 } 
KiloAmpere<char> operator "" _Ka(char val) {
return KiloAmpere<char>(val); 
 } 
MegaAmpere<char> operator "" _MA(char val) {
return MegaAmpere<char>(val); 
 } 
Kelvin<char> operator "" _K(char val) {
return Kelvin<char>(val); 
 } 
MilliKelvin<char> operator "" _mK(char val) {
return MilliKelvin<char>(val); 
 } 
MicroMole<char> operator "" _miMo(char val) {
return MicroMole<char>(val); 
 } 
MilliMole<char> operator "" _mMo(char val) {
return MilliMole<char>(val); 
 } 
Mole<char> operator "" _Mo(char val) {
return Mole<char>(val); 
 } 
Hertz<char> operator "" _Hz(char val) {
return Hertz<char>(val); 
 } 
KiloHertz<char> operator "" _KHz(char val) {
return KiloHertz<char>(val); 
 } 
MegaHertz<char> operator "" _MHz(char val) {
return MegaHertz<char>(val); 
 } 
GigaHertz<char> operator "" _GHz(char val) {
return GigaHertz<char>(val); 
 } 
Wavenumbers<char> operator "" _wn(char val) {
return Wavenumbers<char>(val); 
 } 
NanoMeter<wchar_t> operator "" _nM(wchar_t val) {
return NanoMeter<wchar_t>(val); 
 } 
MicroMeter<wchar_t> operator "" _miM(wchar_t val) {
return MicroMeter<wchar_t>(val); 
 } 
MilliMeter<wchar_t> operator "" _mM(wchar_t val) {
return MilliMeter<wchar_t>(val); 
 } 
CentiMeter<wchar_t> operator "" _cm(wchar_t val) {
return CentiMeter<wchar_t>(val); 
 } 
Meters<wchar_t> operator "" _M(wchar_t val) {
return Meters<wchar_t>(val); 
 } 
KiloMeter<wchar_t> operator "" _KM(wchar_t val) {
return KiloMeter<wchar_t>(val); 
 } 
MegaMeter<wchar_t> operator "" _MM(wchar_t val) {
return MegaMeter<wchar_t>(val); 
 } 
Kilograms<wchar_t> operator "" _Kg(wchar_t val) {
return Kilograms<wchar_t>(val); 
 } 
Gram<wchar_t> operator "" _g(wchar_t val) {
return Gram<wchar_t>(val); 
 } 
MilliSeconds<wchar_t> operator "" _mS(wchar_t val) {
return MilliSeconds<wchar_t>(val); 
 } 
MicroSeconds<wchar_t> operator "" _miS(wchar_t val) {
return MicroSeconds<wchar_t>(val); 
 } 
NanoSeconds<wchar_t> operator "" _nS(wchar_t val) {
return NanoSeconds<wchar_t>(val); 
 } 
Seconds<wchar_t> operator "" _S(wchar_t val) {
return Seconds<wchar_t>(val); 
 } 
Minutes<wchar_t> operator "" _min(wchar_t val) {
return Minutes<wchar_t>(val); 
 } 
Hours<wchar_t> operator "" _hrs(wchar_t val) {
return Hours<wchar_t>(val); 
 } 
Days<wchar_t> operator "" _days(wchar_t val) {
return Days<wchar_t>(val); 
 } 
MicroAmpere<wchar_t> operator "" _miA(wchar_t val) {
return MicroAmpere<wchar_t>(val); 
 } 
MilliAmpere<wchar_t> operator "" _mA(wchar_t val) {
return MilliAmpere<wchar_t>(val); 
 } 
Ampere<wchar_t> operator "" _A(wchar_t val) {
return Ampere<wchar_t>(val); 
 } 
KiloAmpere<wchar_t> operator "" _Ka(wchar_t val) {
return KiloAmpere<wchar_t>(val); 
 } 
MegaAmpere<wchar_t> operator "" _MA(wchar_t val) {
return MegaAmpere<wchar_t>(val); 
 } 
Kelvin<wchar_t> operator "" _K(wchar_t val) {
return Kelvin<wchar_t>(val); 
 } 
MilliKelvin<wchar_t> operator "" _mK(wchar_t val) {
return MilliKelvin<wchar_t>(val); 
 } 
MicroMole<wchar_t> operator "" _miMo(wchar_t val) {
return MicroMole<wchar_t>(val); 
 } 
MilliMole<wchar_t> operator "" _mMo(wchar_t val) {
return MilliMole<wchar_t>(val); 
 } 
Mole<wchar_t> operator "" _Mo(wchar_t val) {
return Mole<wchar_t>(val); 
 } 
Hertz<wchar_t> operator "" _Hz(wchar_t val) {
return Hertz<wchar_t>(val); 
 } 
KiloHertz<wchar_t> operator "" _KHz(wchar_t val) {
return KiloHertz<wchar_t>(val); 
 } 
MegaHertz<wchar_t> operator "" _MHz(wchar_t val) {
return MegaHertz<wchar_t>(val); 
 } 
GigaHertz<wchar_t> operator "" _GHz(wchar_t val) {
return GigaHertz<wchar_t>(val); 
 } 
Wavenumbers<wchar_t> operator "" _wn(wchar_t val) {
return Wavenumbers<wchar_t>(val); 
 } 
NanoMeter<char16_t> operator "" _nM(char16_t val) {
return NanoMeter<char16_t>(val); 
 } 
MicroMeter<char16_t> operator "" _miM(char16_t val) {
return MicroMeter<char16_t>(val); 
 } 
MilliMeter<char16_t> operator "" _mM(char16_t val) {
return MilliMeter<char16_t>(val); 
 } 
CentiMeter<char16_t> operator "" _cm(char16_t val) {
return CentiMeter<char16_t>(val); 
 } 
Meters<char16_t> operator "" _M(char16_t val) {
return Meters<char16_t>(val); 
 } 
KiloMeter<char16_t> operator "" _KM(char16_t val) {
return KiloMeter<char16_t>(val); 
 } 
MegaMeter<char16_t> operator "" _MM(char16_t val) {
return MegaMeter<char16_t>(val); 
 } 
Kilograms<char16_t> operator "" _Kg(char16_t val) {
return Kilograms<char16_t>(val); 
 } 
Gram<char16_t> operator "" _g(char16_t val) {
return Gram<char16_t>(val); 
 } 
MilliSeconds<char16_t> operator "" _mS(char16_t val) {
return MilliSeconds<char16_t>(val); 
 } 
MicroSeconds<char16_t> operator "" _miS(char16_t val) {
return MicroSeconds<char16_t>(val); 
 } 
NanoSeconds<char16_t> operator "" _nS(char16_t val) {
return NanoSeconds<char16_t>(val); 
 } 
Seconds<char16_t> operator "" _S(char16_t val) {
return Seconds<char16_t>(val); 
 } 
Minutes<char16_t> operator "" _min(char16_t val) {
return Minutes<char16_t>(val); 
 } 
Hours<char16_t> operator "" _hrs(char16_t val) {
return Hours<char16_t>(val); 
 } 
Days<char16_t> operator "" _days(char16_t val) {
return Days<char16_t>(val); 
 } 
MicroAmpere<char16_t> operator "" _miA(char16_t val) {
return MicroAmpere<char16_t>(val); 
 } 
MilliAmpere<char16_t> operator "" _mA(char16_t val) {
return MilliAmpere<char16_t>(val); 
 } 
Ampere<char16_t> operator "" _A(char16_t val) {
return Ampere<char16_t>(val); 
 } 
KiloAmpere<char16_t> operator "" _Ka(char16_t val) {
return KiloAmpere<char16_t>(val); 
 } 
MegaAmpere<char16_t> operator "" _MA(char16_t val) {
return MegaAmpere<char16_t>(val); 
 } 
Kelvin<char16_t> operator "" _K(char16_t val) {
return Kelvin<char16_t>(val); 
 } 
MilliKelvin<char16_t> operator "" _mK(char16_t val) {
return MilliKelvin<char16_t>(val); 
 } 
MicroMole<char16_t> operator "" _miMo(char16_t val) {
return MicroMole<char16_t>(val); 
 } 
MilliMole<char16_t> operator "" _mMo(char16_t val) {
return MilliMole<char16_t>(val); 
 } 
Mole<char16_t> operator "" _Mo(char16_t val) {
return Mole<char16_t>(val); 
 } 
Hertz<char16_t> operator "" _Hz(char16_t val) {
return Hertz<char16_t>(val); 
 } 
KiloHertz<char16_t> operator "" _KHz(char16_t val) {
return KiloHertz<char16_t>(val); 
 } 
MegaHertz<char16_t> operator "" _MHz(char16_t val) {
return MegaHertz<char16_t>(val); 
 } 
GigaHertz<char16_t> operator "" _GHz(char16_t val) {
return GigaHertz<char16_t>(val); 
 } 
Wavenumbers<char16_t> operator "" _wn(char16_t val) {
return Wavenumbers<char16_t>(val); 
 } 
NanoMeter<char32_t> operator "" _nM(char32_t val) {
return NanoMeter<char32_t>(val); 
 } 
MicroMeter<char32_t> operator "" _miM(char32_t val) {
return MicroMeter<char32_t>(val); 
 } 
MilliMeter<char32_t> operator "" _mM(char32_t val) {
return MilliMeter<char32_t>(val); 
 } 
CentiMeter<char32_t> operator "" _cm(char32_t val) {
return CentiMeter<char32_t>(val); 
 } 
Meters<char32_t> operator "" _M(char32_t val) {
return Meters<char32_t>(val); 
 } 
KiloMeter<char32_t> operator "" _KM(char32_t val) {
return KiloMeter<char32_t>(val); 
 } 
MegaMeter<char32_t> operator "" _MM(char32_t val) {
return MegaMeter<char32_t>(val); 
 } 
Kilograms<char32_t> operator "" _Kg(char32_t val) {
return Kilograms<char32_t>(val); 
 } 
Gram<char32_t> operator "" _g(char32_t val) {
return Gram<char32_t>(val); 
 } 
MilliSeconds<char32_t> operator "" _mS(char32_t val) {
return MilliSeconds<char32_t>(val); 
 } 
MicroSeconds<char32_t> operator "" _miS(char32_t val) {
return MicroSeconds<char32_t>(val); 
 } 
NanoSeconds<char32_t> operator "" _nS(char32_t val) {
return NanoSeconds<char32_t>(val); 
 } 
Seconds<char32_t> operator "" _S(char32_t val) {
return Seconds<char32_t>(val); 
 } 
Minutes<char32_t> operator "" _min(char32_t val) {
return Minutes<char32_t>(val); 
 } 
Hours<char32_t> operator "" _hrs(char32_t val) {
return Hours<char32_t>(val); 
 } 
Days<char32_t> operator "" _days(char32_t val) {
return Days<char32_t>(val); 
 } 
MicroAmpere<char32_t> operator "" _miA(char32_t val) {
return MicroAmpere<char32_t>(val); 
 } 
MilliAmpere<char32_t> operator "" _mA(char32_t val) {
return MilliAmpere<char32_t>(val); 
 } 
Ampere<char32_t> operator "" _A(char32_t val) {
return Ampere<char32_t>(val); 
 } 
KiloAmpere<char32_t> operator "" _Ka(char32_t val) {
return KiloAmpere<char32_t>(val); 
 } 
MegaAmpere<char32_t> operator "" _MA(char32_t val) {
return MegaAmpere<char32_t>(val); 
 } 
Kelvin<char32_t> operator "" _K(char32_t val) {
return Kelvin<char32_t>(val); 
 } 
MilliKelvin<char32_t> operator "" _mK(char32_t val) {
return MilliKelvin<char32_t>(val); 
 } 
MicroMole<char32_t> operator "" _miMo(char32_t val) {
return MicroMole<char32_t>(val); 
 } 
MilliMole<char32_t> operator "" _mMo(char32_t val) {
return MilliMole<char32_t>(val); 
 } 
Mole<char32_t> operator "" _Mo(char32_t val) {
return Mole<char32_t>(val); 
 } 
Hertz<char32_t> operator "" _Hz(char32_t val) {
return Hertz<char32_t>(val); 
 } 
KiloHertz<char32_t> operator "" _KHz(char32_t val) {
return KiloHertz<char32_t>(val); 
 } 
MegaHertz<char32_t> operator "" _MHz(char32_t val) {
return MegaHertz<char32_t>(val); 
 } 
GigaHertz<char32_t> operator "" _GHz(char32_t val) {
return GigaHertz<char32_t>(val); 
 } 
Wavenumbers<char32_t> operator "" _wn(char32_t val) {
return Wavenumbers<char32_t>(val); 
 } 

#endif