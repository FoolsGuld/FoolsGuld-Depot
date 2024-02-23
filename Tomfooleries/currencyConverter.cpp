//a work in progress

#include<iostream>

using namespace std;

int main(){
    double input;
    double output;
    char user;


    while(user != 1 && user != 2){
        cout << "Do you want to convert USD -> CAD (1) or USD <- CAD (2)?\n";
        cin >> user;
        cout << "Input is " << user << "\n";
        if(user == 1 || user == 2){
            break;
        }
    }
    if(user == 1){
        cout << "USD: ";
        while(input == 0){
        cin >> input;
        }
    }
    return 0;
}