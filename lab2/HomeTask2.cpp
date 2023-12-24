//Write the Python code of a program that reads an integer, and prints the integer it is a multiple of either 2 or 5 but not both. If the number is a multiple of 2 and 5 both, then print "Multiple of 2 and 5 both". For all other numbers, the program prints "Not a multiple we want".

#include <iostream>

using namespace std ;

int main(){
    int num;

    cout << "Enter number-";
    cin >> num;
   
    if (num%2==0 && num%5==0){
        cout << "Multiple of 2 and 5 both";
    }
    else if (num%2==0 || num%5==0){
        cout << num;
    }
    else{
        cout << "Not a multiple we want";
    }
    
}