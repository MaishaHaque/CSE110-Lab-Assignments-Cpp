//Take the first name, last name, age and CGPA of a student. Change the last name to "Rahman". Subtract 2 from the age and add 0.25 with the CGPA. Finally print the information in the way shown in the output. 

#include <iostream>
#include <cmath>
using namespace std; 

int main() {
    
    string fname, lname;
    int age;
    float cgpa;

    cout << "First Name: ";
    cin >> fname;

    cout << "Last Name: ";
    cin >> lname;

    cout << "Age: ";
    cin >> age;

    cout << "CGPA: ";
    cin >> cgpa;

    lname="Rahman";
    age=age-2;
    cgpa+=0.25;

    cout << "Name: "+fname +" "+ lname <<endl;
    cout <<"Age: "<<age << endl;
    cout <<"CGPA: "<<cgpa << endl;

    return 0;

}