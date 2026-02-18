/*
Introduction
The first century spans from the year 1 up to and including the year 100, the second century - from the year 101 up to and including the year 200, etc.

Task
Given a year, return the century it is in.
*/
#include <iostream>
#include <cmath>

using namespace std;

int centuryFromYear(int year) 
{
return (year - 1) / 100 + 1 ;
}

int main() {
    int tahun;

    cin >> tahun ;
    centuryFromYear(tahun);

    cout << "" << centuryFromYear(tahun) << std::endl ;

    return 0;
}