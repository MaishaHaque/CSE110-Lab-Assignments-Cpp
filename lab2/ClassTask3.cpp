//Write the Python code of a program that reads an integer as input from the user, and prints the integer if it is a multiple of 2 OR 5 and prints "Not a multiple of 2 OR 5" otherwise.

#include <iostream>

using namespace std ;

int main(){
    int num;

    cout << "Enter number-";
    cin >> num;
   
    if (num%2==0 || num%5==0){
        cout << num;
    }
    else{
        cout << "Not a multiple of 2 OR 5";
    }
    
}