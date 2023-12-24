//Suppose, your friend is building an automated car called “Besla”. He needs to fix the programming of the car so that it runs at a proper speed. Now, write a python program that takes 2 inputs (distance in meters and time in seconds). The program should then print the velocity in kilometers per hour of that car. Also, it should print whether the car is working properly based on the following chart.
//Less than 60 km/h-----Too slow. It needs more changes.
//Between 60 km/h to 90 km/h-------Velocity is okay. The car is ready!
//Greater than 90 km/h-------Too fast. Only a few changes should suffice.

#include <iostream>
#include <cmath>

using namespace std ;

int main(){

  float d,t,v;

  cout << "Enter distance in meter-";
  cin >> d;
  cout << "Enter time in seconds-";
  cin >> t;

  v=(d/1000)/(t/3600);

  if (v<60){
    cout << "Too slow. It needs more changes.";
  }
  else if (v>=60 && v<=90){
    cout << "Velocity is okay. The car is ready!";
  }
  else{
    cout << "Too fast. Only a few changes should suffice.";
  }
    
}

