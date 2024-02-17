#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double sideA;
    double sideB;
    double hypotenuse;

    //Input
    cout << "Side A: \n";
    cin >> sideA;

    cout << "Side B: \n";
    cin >> sideB;

    //calculate
    hypotenuse = sqrt(sideA*sideA + sideB*sideB);

    //output
    cout << "Hypotenuse is " << hypotenuse << ". \n";

    return 0;
}