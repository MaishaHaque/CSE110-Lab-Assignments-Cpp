//Take two integer numbers from the user. Convert the second number into float. Now convert both numbers into string and add them. Print the addition.

#include <iostream>
#include <string>
using namespace std; 

int main() {
    
    int num1;
    int num2;

    cout << "Enter first number- ";
    cin >> num1;

    cout << "Enter second number- ";
    cin >> num2;

    int conv= (float)num2;
    
    string value= to_string(num1)+ to_string(conv);

    cout <<value;

    return 0;

}