/*
 *Types for C++
 *License: <Mine>
 *You can modify this file
 *Author: Mitora34
*/
#include <iostream>
#include <string.h>
class types{
    public:
        //Changeable types
        #define vars short
        #define vari int
        #define varc char
        #define varf float
        #define vard double
        #define varld long double
        #define varl long
        #define varx long long
        //Changeable-unsigned types
        #define varus unsigned short
        #define varui unsigned int
        #define varuc unsigned char
        #define varuf unsigned float
        #define varud unsigned double
        #define varul unsigned long
        #define varux unsigned long long
        //Not-changeable types
        #define cshort const short
        #define cint const int
        #define cchar const char
        #define cfloat const float
        #define cdouble const double
        #define cldouble const long double
        #define clong const long
        #define clng const long long
        //Not-changeable-unsigned types
        #define cushort const unsigned short
        #define cuint const unsigned int
        #define cuchar const unsigned char
        #define culong const unsigned long
        #define culng const unsigned long long
        //String abbriviated types
        #define str string
        #define wstr wstring
        #define u16str u16string
        #define u32str u32string
        //Full types of classic types
        #define integer int
        #define boolean bool
        #define character char
};