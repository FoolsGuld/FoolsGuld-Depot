#include <iostream>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    int num;
    int guess;
    num = rand() % 100;
    cout << "Guess a number: " << endl;
    cin >> guess;
    while(guess != num){
        if(guess > num){
            cout << "Too high!" << endl;
        }
        else{
            cout << "Too low!" << endl;
        } 
        else{
            break;
        }
    }
    cout << "You got it! The number was " << num << ".";
    return 0;
}