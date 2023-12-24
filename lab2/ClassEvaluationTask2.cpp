//Write the Python code of a program that finds the number of hours, minutes, and seconds in a given number of seconds. The number of seconds is taken as input from the user.

#include <iostream>
#include <cmath>

using namespace std ;

int main(){

    int hour,min,sec;

    cout << "Enter seconds-";
    cin >> sec;

    hour= floor(sec/3600);
    sec=sec%3600;

    min=floor(sec/60);
    sec=sec%60;

    cout <<"Hours: "+ to_string(hour) +"\nMinutes: "+ to_string(min)+ "\nSeconds: "+ to_string(sec) ;
    
}