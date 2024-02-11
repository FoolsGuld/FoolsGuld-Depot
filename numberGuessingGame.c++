#include <iostream>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    int num = rand() % 100;
    int guess;
    int guesses = 0;

    cout << "Guess a number: " << endl;

    while(guess != num){
        cin >> guess;
        guesses++;
        if(guess == num){
            break;
        } else if(guess > num){
            cout << "Too high!" << endl;
        }
        else{
            cout << "Too low!" << endl;
        } 
    }
    cout << "You got it! The number was " << num << ". It took you " << guesses << " guesses. \n";
    return 0;
}