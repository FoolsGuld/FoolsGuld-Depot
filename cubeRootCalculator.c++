#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    //variables
    double input;
    double output;
    //output header
    cout << "********************" << endl;
    cout << "CUBE ROOT CALCULATOR" << endl;
    cout << "********************" << endl;
    do{
        //receive input
        input = 0;
        output = 0;
        cout << "Enter a number:" << endl;
        cin >> input;
        //calculate
        if(input!=0){
            output = cbrt(input);
            //output to terminal
            cout << "The cube root of " << input << " is " << output << "." << endl;
        }else{
            cout << "Error!" << endl;
        }
        cout << "********************" << endl;

    }while(true);
    return 0;
}