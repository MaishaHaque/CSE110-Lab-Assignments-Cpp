//A sailor has a boat known as Téssares Boat, which has four corners. The boat is capable of carrying goods of any weight as long as there is equal distribution of loads on each corner of the boat - the center area has been occupied by the engine. The sailor needs your help to know the maximum amount of weight he can carry in each shipment.
Write a program that reads the total weight of the shipment and prints the maximum load (or weight) the boat can take from the given shipment. We can assume that the weight of each good is exactly 1 unit, therefore, the weight of 5 units means there are 5 (loose) items in the shipment.
//sample input- 9 sample output- 8

#include <iostream>
#include <cmath>
using namespace std; 

int main() {
    
    int weight;

    cout << "Enter total weight- ";
    cin >> weight;

    cout <<weight-(weight%4);

    return 0;

}