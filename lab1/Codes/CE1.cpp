//Write a Python program that reads 3 integers A, B, and C respectively, and then reads a floating-point number D. After reading, the program should print the result (as int) using the given formula below.
//Formula: AC + (2*B) * (A//2) - D/3 

#include <iostream>
#include <cmath>
using namespace std; 

int main() {
    
    int A,B,C;
    float D;

    cout << "Enter value of A- ";
    cin >> A;

    cout << "Enter value of B- ";
    cin >> B;

    cout << "Enter value of C- ";
    cin >> C;

    cout << "Enter value of D- ";
    cin >> D;

    int result=pow(A,C) + (2*B) * (floor(A/2)) - D/3; //changing A//2 to floor(A/2) as there are no operators in C++ for floor devision
    cout << result ; 
   
    return 0;

}