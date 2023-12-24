//Write a python program that takes the CGPA and no of credits completed by a student and prints whether the student is eligible for a waiver and of what percentage. To be eligible for a waiver, a student must have completed at least 30 credits and earned a CGPA greater or equal to 3.8. If not, please print "The student is not eligible for a waiver".

#include <iostream>

using namespace std ;

int main(){
    float cg;
    int credits;

    cout << "Enter cgpa-";
    cin >> cg;
    cout << "Enter credits-";
    cin >> credits;
   
    if (credits>=30 && (cg<=4.00 && cg>=3.80)){
        if (cg>=3.80 and cg<=3.89){
            cout << "The student is eligible for a waiver of 25 percent";
        }
        else if (cg>=3.90 and cg<=3.94){
            cout << "The student is eligible for a waiver of 50 percent";
        }
        else if (cg>=3.95 and cg<=3.99){
            cout << "The student is eligible for a waiver of 75 percent";
        }
        else if (cg==4.00){
            cout << "The student is eligible for a waiver of 100 percent";
        }
    }
    else{
        cout << "The student is not eligible for a waiver";
    }
    
}
