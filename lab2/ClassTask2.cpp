//Write the Python code of a program that reads two numbers from the user. The program should then print "First is greater" if the first number is greater, "Second is greater" if the second number is greater, and "The numbers are equal" otherwise

#include <iostream>

using namespace std ;

int main(){
    int num1, num2;

    cout << "Enter fist number-";
    cin >> num1;
    cout << "Enter second number-";
    cin >> num2;
    if (num1>num2){
        cout << "First is greater";
    }
    else if (num2>num1){
        cout << "First is greater";
    }
    else{
        cout << "The numbers are equal";
    }
    
}