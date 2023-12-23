//Write a Python program that reads two integers M and N respectively and finds the value of M^N (or MN) and prints the value exactly as shown in the examples below. Your code should work correctly for any other sample inputs.

#include <iostream>
#include <cmath>
using namespace std; 

int main() {
    
    int num1;
    int num2;

    cout << "Enter first number- ";
    cin >> num1;

    cout << "Enter second number- ";
    cin >> num2;

    cout <<num1<<"^"<<num2<<": "<<pow(num1,num2);

    return 0;

}