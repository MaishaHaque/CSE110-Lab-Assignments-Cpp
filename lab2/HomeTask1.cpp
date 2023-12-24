//Write the Python code of a program that reads two numbers, subtracts the smaller number from the larger one, and prints the result
#include <iostream>

using namespace std ;

int main(){
    int num1, num2;

    cout << "Enter fist number-";
    cin >> num1;
    cout << "Enter second number-";
    cin >> num2;
    if (num1>num2){
        cout << num1-num2;
    }
    else{
        cout << num2-num1;
    }
    
}
