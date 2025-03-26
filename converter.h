/*
 *Converter in C++
 *Purpose: Convert values for easier using of converted types
 *License: <Mine>
 *You can modify this file
 *Author: Mitora34
*/
#pragma once
#ifndef _CONVERTER_H
#define _CONVERTER_H 1
#endif
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <math.h>
using namespace std;
double num1, num2, num3;

//----------Temperature----------

//++++++++++Celcius(Temperature)++++++++++

//Celcius to Fahrenheit
double cel_fahren(){
    cout<<"Enter value in Celcius:";
    cin>>num1;
    num2 = num1 * 9 / 5 + 32;
    cout<<num1<<"Celcius"<<"="<<num2<<"Fahrenheit"<<endl;
}
//Celcius to Kelvin
double cel_kel(){
    cout<<"Enter value in Celcius:";
    cin>>num1;
    num2 = num1 + 273.15;
    cout<<num1<<"Celcius"<<"="<<num2<<"Kelvin"<<endl;
}

//++++++++++Fahrenheit(Temperature)++++++++++

//Fahrenheit to Celcius
double fahren_cel(){
    cout<<"Enter value in Fahrenheit:";
    cin>>num1;
    num2 = (num1 - 32) * 5 / 9;
    cout<<num1<<"Fahrenheit"<<"="<<num2<<"Celcius"<<endl;
}
//Fahrenheit to Kelvin
double fahren_kel(){
    cout<<"Enter value in Fahrenheit:";
    cin>>num1;
    num2 = (num1 - 32) * 5 / 9 + 273.15;
    cout<<num1<<"Fahrenheit"<<"="<<num2<<"Kelvin"<<endl;
}

//++++++++++Kelvin(Temperature)++++++++++

//Kelvin to Celcius
double kel_cel(){
    cout<<"Enter value in Kelvin:";
    cin>>num1;
    num2 = num1 - 273.15;
    cout<<num1<<"Kelvin"<<"="<<num2<<"Celcius"<<endl;
}
//Kelvin to Fahrenheit
double kel_fahren(){
    cout<<"Enter value in Kelvin:";
    cin>>num1;
    num2 = (num1 - 273.15) * 9 / 5 + 32;
    cout<<num1<<"Kelvin"<<"="<<num2<<"Fahrenheit"<<endl;
}

//----------Pressure----------

//++++++++++Atmosphere(Pressure)++++++++++

//Atmosphere to Bar
double at_bar(){
    cout<<"Enter value in Atmosphere:";
    cin>>num1;
    num2 = num1 * 1.01325;
    cout<<num1<<"Atmosphere"<<"="<<num2<<"Bar"<<endl;
}
//Atmosphere to Pascal
double at_pas(){
    cout<<"Enter value in Atmospere:";
    cin>>num1;
    num2 = num1 * 101325;
    cout<<num1<<"Atmosphere"<<"="<<num2<<"Pascal"<<endl;
}
//Atmosphere to Torr
double at_tor(){
    cout<<"Enter value in Atmospere:";
    cin>>num1;
    num2 = num1 * 760;
    cout<<num1<<"Atmosphere"<<"="<<num2<<"Torr"<<endl;
}

//++++++++++Bar(Pressure)++++++++++

//Bar to Atmosphere
double bar_at(){
    cout<<"Enter value in Bar:";
    cin>>num1;
    num2 = num1 / 1.01325;
    cout<<num1<<"Bar"<<"="<<num2<<"Atmosphere"<<endl;
}
//Bar to Pascal
double bar_pas(){
    cout<<"Enter value in Bar:";
    cin>>num1;
    num2 = num1 * 100000;
    cout<<num1<<"Bar"<<"="<<num2<<"Pascal"<<endl;
}
//Bar to Torr
double bar_tor(){
    cout<<"Enter value in Bar:";
    cin>>num1;
    num2 = num1 * 750.062;
    cout<<num1<<"Bar"<<"="<<num2<<"Torr"<<endl;
}

//++++++++++Pascal(Pressure)++++++++++

//Pascal to Atmosphere
double pas_at(){
    cout<<"Enter value in Pascal:";
    cin>>num1;
    num2 = num1 / 101325;
    cout<<num1<<"Pascal"<<"="<<num2<<"Atmosphere"<<endl;
}
//Pascal to Bar
double pas_bar(){
    cout<<"Enter value in Pascal:";
    cin>>num1;
    num2 = num1 / 100000;
    cout<<num1<<"Pascal"<<"="<<num2<<"Bar"<<endl;
}
//Pascal to Torr
double pas_tor(){
    cout<<"Enter value in Pascal:";
    cin>>num1;
    num2 = num1 / 133.322;
    cout<<num1<<"Pascal"<<"="<<num2<<"Torr"<<endl;
}

//++++++++++Torr(Pressure)++++++++++

//Torr to Atmosphere
double tor_at(){
    cout<<"Enter value in Torr:";
    cin>>num1;
    num2 = num1 / 760;
    cout<<num1<<"Torr"<<"="<<num2<<"Atmosphere"<<endl;
}
//Torr to Bar
double tor_bar(){
    cout<<"Enter value in Torr:";
    cin>>num1;
    num2 = num1 / 750.062;
    cout<<num1<<"Torr"<<"="<<num2<<"Bar"<<endl;
}
//Torr to Pascal
double tor_pas(){
    cout<<"Enter value in Torr";
    cin>>num1;
    num2 = num1 * 133.322;
    cout<<num1<<"Torr"<<"="<<num2<<"Pascal"<<endl;
}