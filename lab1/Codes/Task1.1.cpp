//Take a String and an integer input from the user and print these.
#include <iostream>
using namespace std; 

int main() {
    
    string a;
    int b;

    cout << "Enter a string- ";
    getline(cin,a);

    cout << "Enter an integer- ";
    cin >> b ;

    cout << a << endl;
    cout << b << endl;

    return 0;

}