//Write the Python code of a program that reads a number, and prints "The number is even" or "The number is odd", depending on whether the number is even or odd.

#include <iostream>

using namespace std ;

int main(){
    int num;

    cout << "Enter number-";
    cin >> num;
    if (num%2==0){
        cout << "The number is even";
    }
    else{
        cout << "The number is odd";
    }
    
}