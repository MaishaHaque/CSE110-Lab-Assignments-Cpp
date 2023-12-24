//Write a Python program to compute and display a person’s weekly salary as determined by the following conditions:
//If the hours worked is less than or equal to 40, then the person receives Tk 200 per hour.
//If the hours worked is greater than 40, then the person receives Tk 8000 plus Tk 300 for each hour worked over 40 hours.
//The program should request the hours worked as an input from the user and display the salary as output. You need to make sure that user input is valid. For example, a person cannot work for -5 hours or more than 168 hours in a week. So, the valid hours range is 0 to 168. For invalid hours, print outputs as given in the samples below.

#include <iostream>

using namespace std ;

int main(){

    int hour;

    cout << "Enter hours-";
    cin >> hour;
    if (hour>=168){
        cout << "Impossible to work more than 168 hours weekly";
    }
    else if (hour < 0){
        cout << "Hour cannot be negative";
    }
    else if (hour<=40){
        cout << hour*200;
    }
    else{
        cout << 8000 + (hour-40)*300;
    }    
    
}