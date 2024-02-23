//a work in progress

#include<iostream>

using namespace std;

int main(){
    double input;
    double output;
    double user;

    while(true){
        cout << "Do you want to convert USD -> CAD (1) or USD <- CAD (2)?\n";
        cin >> user;
        if(user == 1 || user == 2) {
            break;
        }
    }
    if(user == 1){
        while(!input > 0){
            cout << "USD: ";
            cin >> input;
        }
        output = input * 1.35;
        cout << "$" << input << " in CAD is $" << output << ".\n";
    } else {
        while(!input > 0){
            cout << "CAD: ";
            cin >> input;
        }
        output = input / 1.35;
        cout << "$" << input << " in USD is $" << output << ".\n";
    }
    return 0;
}