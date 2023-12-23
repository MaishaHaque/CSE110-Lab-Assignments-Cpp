//Take one integer input and one float input from the user and print their addition and subtraction in the same line separated by a space.

#include <iostream>
using namespace std; 

int main() {
    
    int num1;
    float num2;
    float summ, sub;
    cout << "Enter first number- ";
    cin >> num1;

    cout << "Enter second number- ";
    cin >> num2;

    cout << num1+num2 << " " << num1-num2 ;


    return 0;

}