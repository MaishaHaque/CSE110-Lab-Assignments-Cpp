//Write the Python code of a program that reads an integer, and prints the integer if it is a multiple of 2 AND 5 and prints "Not multiple of 2 and 5 both" otherwise.
 
#include <iostream>

using namespace std ;

int main(){
    int num;

    cout << "Enter number-";
    cin >> num;
   
    if (num%2==0 && num%5==0){
        cout << num;
    }
    else{
        cout << "Not multiple of 2 and 5 both";
    }
    
}