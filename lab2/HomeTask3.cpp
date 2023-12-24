//Suppose the following expressions are used to calculate the values of L for different values of S:
//L=3000-125S^2 is S<100
//L=12000/((4+S^2)/14900) is S>=100


#include <iostream>
#include <cmath>
using namespace std ;

int main(){
    int s;

    cout << "Enter number-";
    cin >> s;
   
    if (s<100){
        cout <<3000-125*pow(s,2);
    }
    else {
        cout << 12000/((4+pow(s,2)/14900));
    }
    
}
