//Write the Python code of a program that reads a student’s mark for a single subject, and prints out the corresponding grade for that mark. The mark ranges and corresponding grades are shown in the table below. You need to make sure that the mark is valid. For example, a student cannot receive -5 or 110 marks. So, the valid marks range from 0 to 100.

#include <iostream>

using namespace std ;

int main(){
    int m;

    cout << "Enter marks-";
    cin >> m;
   
    if (m>=0 && m<=100){
        if (m>90){
            cout << "A";
        }
        else if (m>=80 and m<=89){
            cout << "B";
        }
        else if (m>=70 and m<=79){
            cout << "C";
        }
        else if (m>=60 and m<=69){
            cout << "D";
        }
        else if (m>=50 and m<=59){
            cout << "E";
        }
        else{
            cout << "F";
        }
    }
    else{
        cout << "Invalid Marks";
    }
    
}
