/*
 *Python/C#/Assembler syntax in C++
 *Input/Output
 *Purpose: Make easier syntax in C++ and some new functions 
 *Includes math and geometry functions
 *License: <Mine>
 *You can modify this file
 *Author: Mitora34
*/
#pragma once
#ifndef _IOPYTHON_H
#define _IOPYTHON_H 1
#endif
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <math.h>
#include <types.h>
#define nl "\n"
#define tab "\t"
using namespace std;
double num1, num2, num3;
double pi = 3.1415926;
double e = 2.718281828;
cint square_degree = 360;
cint rectangle_degree = 360;
cint circle_degree = 360;
cint triangle_degree = 180;
//String output
string print(string word){
    cout<<word<<nl;
}
//Float output
double print(double num){
    cout<<num<<nl;
}
//String input
string input(string words){
    cin>>words;
}
//Float input
double input(double nums){
    cin>>nums;
}
//Output of string
string ConsoleWriteLine(string word){
    cout<<word<<nl;
}
//Output of float
double ConsoleWriteFloat(double num){
    cout<<num<<nl;
}
//Input of string
string ScanStr(string words){
    cin>>words;
}
//Input of float
double ScanFloat(float nums){
    cin>>nums;
}
//Summarizing numbers
double sum(){
    cout<<"Enter value for 3 nums"<<nl;
    cout<<"First num:";
    cin>>num1;
    cout<<"Second num:"<<nl;
    cin>>num2;
    cout<<"Third num:"<<nl;
    cin>>num3;
    cout<<"Sum:"<<num1 + num2 + num3<<nl;
}
//Subbing numbers
double sub(){
    cout<<"Enter value for 3 nums"<<nl;
    cout<<"First num:";
    cin>>num1;
    cout<<"Second num:"<<nl;
    cin>>num2;
    cout<<"Third num:"<<nl;
    cin>>num3;
    cout<<"Sub:"<<num1 - num2 - num3<<nl;
}
//Multiplication of numbers
double mul(){
    cout<<"Enter value for 3 nums"<<nl;
    cout<<"First num:";
    cin>>num1;
    cout<<"Second num:"<<nl;
    cin>>num2;
    cout<<"Third num:"<<nl;
    cin>>num3;
    cout<<"Mul:"<<num1 * num2 * num3<<nl;
}
//Dividing numbers
double div(){
    cout<<"Enter value for 3 nums"<<nl;
    cout<<"First num:";
    cin>>num1;
    cout<<"Second num:"<<nl;
    cin>>num2;
    cout<<"Third num:"<<nl;
    cin>>num3;
    cout<<"Div:"<<num1 / num2 / num3<<nl;
}
//Error handler 1
double zero_div_err(double num0, double num){
    if(num == 0){
        throw(467);
    }
    else{
        cout<<(num0 / num);
    }
}
//Minimal value in array outputing
void min(int* arr, int len){
    int minimal = *arr;
    for(int i = 0; i < len; i++){
        if(minimal > *(arr + i)){
            minimal = *(arr + i);
        }
    }
    cout<<"Minimal value:"<<minimal<<nl;
}
//Maximal value in array outputing
void max(int* arr, int len){
    int maximal = *arr;
    for(int i = 0; i < len; i++){
        if(maximal < *(arr + i)){
            maximal = *(arr + i);
        }
    }
    cout<<"Maximal value:"<<maximal<<nl;
}
//Comparing numbers
double cmp(){
    cout<<"Enter value for 2 nums"<<nl;
    cout<<"First num:";
    cin>>num1;
    cout<<"Second num:"<<nl;
    cin>>num2;
    if(num1 > num2){
        cout<<"First num greater than second num"<<nl;
    }
    if(num2 > num1){
        cout<<"First num less than second num"<<nl;
    }
    if(num1 == num2){
        cout<<"First num equal to second num"<<nl;
    }
}
//Increase number
double inc(){
    cout<<"Enter value for first num:";
    cin>>num1;
    cout<<"Enter value for second num:"<<nl;
    cin>>num2;
    string oper;
    cout<<"Do you wanna increase first num by second num (y/n):";
    cin>>oper;
    if(oper == "y"){
        cout<<num1 + num2<<nl;
    }
    if(oper == "n"){
        cout<<"Ok"<<nl;
    }
}
//Decrease number
double dec(){
    cout<<"Enter value for first num:";
    cin>>num1;
    cout<<"Enter value for second num:"<<nl;
    cin>>num2;
    string oper;
    cout<<"Do you wanna decrease first num by second num (y/n):";
    cin>>oper;
    if(oper == "y"){
        cout<<num1 - num2<<nl;
    }
    if(oper == "n"){
        cout<<"Ok"<<nl;
    }
}
//Perimeter for square
double sper(){
    cout<<"Enter value for square side:";
    cin>>num1;
    double sperimeter = num1 * 4;
    cout<<"Perimeter of square:"<<sperimeter<<nl;
}
//Perimeter for rectangle
double rper(){
    cout<<"Enter value for length of rectangle:";
    cin>>num1;
    cout<<"Enter value for width of rectangle:";
    cin>>num2;
    double rperimeter = (num1 + num2) * 2;
    cout<<"Perimeter of rectangle:"<<rperimeter;
}
//Perimeter for triangle
double tper(){
    cout<<"Enter value for first side of triangle:";
    cin>>num1;
    cout<<"Enter value for second side of triangle:";
    cin>>num2;
    cout<<"Enter value for third side of triangle:";
    cin>>num3;
    double tperimeter = num1 * num2 * num3;
    cout<<"Perimeter of triangle:"<<tperimeter;
}
//Square for square
double square(){
    cout<<"Enter value for square side:";
    cin>>num1;
    double ssquare = num1 * num1;
    cout<<"Square of square:"<<ssquare;
}
//Square for rectangle
double rsquare(){
    cout<<"Enter value for length of rectangle:";
    cin>>num1;
    cout<<"Enter value for width of rectangle:";
    cin>>num2;
    double rsquar = num1 * num2;
    cout<<"Square of rectangle:"<<rsquar;
}
//Volume for cube
double vcube(){
    cout<<"Enter value for cube side:";
    cin>>num1;
    double vcub = num1 * num1 * num1;
    cout<<"Volume of cube:"<<vcub;
}
//Volume for parallelepiped
double vparal(){
    cout<<"Enter value for length of parallelepiped:";
    cin>>num1;
    cout<<"Enter value for width of parallelepiped:";
    cin>>num2;
    cout<<"Enter value for height of parallelepiped:";
    cin>>num3;
    double vparalelepiped = num1 * num2 * num3;
    cout<<"Volume of parallelepiped:"<<vparalelepiped;
}
//Circle length
double clen(){
    double radius;
    cout<<"Enter value for radius of circle:";
    cin>>radius;
    double clength = 2 * pi * radius;
    cout<<"Length of circle:"<<clength;
}
//Square for circle
double csquare(){
    double radius;
    cout<<"Enter value for radius of circle:";
    cin>>radius;
    double csquar = pi * (radius * radius);
    cout<<"Square of circle:"<<csquar;
}
//Formula of Abbriviated Multipliction
double am(){
    return (num1 + num2) * (num1 - num2);
}
//Gauss's formula
double gauss(){
    int num;
    return num * (num + 1) / 2;
}
//Greatest Common Divisor
double gcd(int num, int nums){
    while (nums != 0){
        int temp = nums;
        nums = num % nums;
        num = temp;
    }
    return num;
}
//Least Common Multiply
double lcm(int num, int nums){
    return abs(num * nums) / gcd(num, nums);
}
//Number checking
int numcheck(){
    int num;
    cout<<"Enter a num:";
    cin>>num;
    if(num % 2 == 0){
        cout<<"Number is even"<<nl;
    }
    if(num % 2 == 1){
        cout<<"Number is odd"<<nl;
    }
}
//Sort even numbers
double sev(int arr){
    int num0, num;
    for(int i = 0; i < arr; i++){
        if(num0 % 2 == 0 && num % 2 == 1){
            delete &num;
        }
    }
    return arr;
}
//Sort odd numbers
double sod(int arr){
    int num0, num;
    for(int i = 0; i < arr; i++){
        if(num0 % 2 == 0 && num % 2 == 1){
            delete &num0;
        }
    }
    return arr;
}
//Deleting duplicates in array
double set(int arr){
    for(int i = 0; i < arr; i++){
        if(i++ == i){
            delete &i;
        }
    }
    return arr;
}
//Number reversing
int reverse(int num){
    int reversed = 0;
    while(num != 0){
        int rnum = num % 10;
        reversed = reversed * 10 + rnum;
        num /= 10;
    }
    return reversed;
}
//Number binary form finding
int binum(){
    int num, nums;
    cout<<"Enter a num:";
    cin>>num;
    while(num > 0){
        nums = num % 2;
        cout<<nums;
        num/=2;
    }
    //We reverse it because it is reversed wrongly
    cout<<"The binary form of this num is:"<<reverse(num);
}
int palindrom(){
    int num;
    int orig_num = num;
    int rnum = 0;
    cout<<"Enter a number:";
    cin>>num;
    reverse(orig_num);
    if(num < 0){
        return false;
    }
    if(orig_num == rnum){
        cout<<"Number is palindrom"<<nl;
    }
    if(orig_num != rnum){
        cout<<"Number is not a palindrom"<<nl;
    }
}
