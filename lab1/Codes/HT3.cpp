Write a python program that takes an integer from the user which represents the number of chocolates that he/she has. He/She decided to distribute the chocolates equally among 3 friends, keeping the remaining chocolates for him/herself. Find out the number of chocolates each friend will receive and the number of chocolates that will be remaining.
 
#include <iostream>
#include <string>
#include <cmath>
using namespace std; 

int main() {
    
    int chocolates;

    cout << "Number of chocolates: ";
    cin >> chocolates;
    
    int each= floor(chocolates/3);

    cout <<"Each friend will receive "+ to_string(each) + " chocolates" <<endl;
    cout <<"The number of remaining chocolates is "<< chocolates%3 <<endl;
    

    return 0;

}