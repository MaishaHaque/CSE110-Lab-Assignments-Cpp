
#include <iostream>

using namespace std ;

int main(){
    int t;

    cout << "Enter time-";
    cin >> t;
   
    if (t>=0 && t<=23){
        if (t>=4 and t<=6){
            cout << "Breakfast";
        }
        else if (t>=12 and t<=13){
            cout << "Lunch";
        }
        else if (t>=16 and t<=17){
            cout << "Snacks";
        }
        else if (t>=19 and t<=20){
            cout << "Dinner";
        }
        else{
            cout << "Patience is a virtue";
        }
    }
    else{
        cout << "Wrong time";
    }
    
}
