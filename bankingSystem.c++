#include <iostream>

using namespace std;

int main() {
    string input;
    double balance = 0;
    double moneyDepositing;
    double moneyWithdrawing;
    do{
        //starting up message
    cout << "********************************************" << endl;
    cout << "Welcome to the bank. What can we do for you?" << endl; 
    cout << "D - Deposit money" << endl;
    cout << "W - Withdraw money" << endl;
    cout << "C - Check balance" << endl;
    cout << "********************************************" << endl;
    cin >> input;
    if(input == "D" , "d"){
        cout << "********************************************" << endl;
        cout << "How much money would you like to deposit?" << endl;
        cin >> moneyDepositing;
        balance += moneyDepositing;
        cout << "Deposited $" << moneyDepositing << "." << endl;
    } else if(input == "W" , "w"){
        cout << "How much money would you like to withdraw?" << endl;
        cin >> moneyWithdrawing;
        if(moneyWithdrawing <= balance){
            cout << "Withdraw succesful." << endl;
            balance -= moneyWithdrawing;
        } else {
            cout << "Error!" << endl;
        }
    } else if(input == "C" , "c"){
        cout << "Your balance is $" << balance << "." << endl;
    }
    }while(true);
    return 0;
}