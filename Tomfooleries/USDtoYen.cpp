#include<iostream>

using namespace std;

int main(){
    double currentWorth = 150.35;
    double input;
    double output;
    double user;
        cout << "Conversion is as of Feb 22, 2024.\n";
        cout << "Do you want to convert USD -> JPY (1) or USD <- JPY (2)?\n";
        cin >> user;
    if(user == 1){
        cout << "USD: ";
        cin >> input;
        output = input * currentWorth;
        cout << "$" << input << " in JPY is ¥" << output << ".\n";
    } else {
        cout << "JPY: ";
        cin >> input;
        output = input / currentWorth;
        cout << "¥" << input << " in USD is $" << output << ".\n";
    }
    return 0;
}