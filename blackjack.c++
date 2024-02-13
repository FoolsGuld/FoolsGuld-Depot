#include <iostream>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    int cards[13] = {11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10};
    int score = 0;
    int opScore = 0;
    int dealerFirstCard = 0;
    char input;
    int drawnCard;
    int chips = 50;
    int bet;
    while(true){
    bet = 0;
    input = 0;
    drawnCard = 0;
    score = 0;
    opScore = 0;
    dealerFirstCard = 0;
    cout << "******************************\n";
    cout << "You have " << chips << " chips. \n";
    cout << "How much would you like to bet?\n";
    while(true) {
        cin >> bet;
        if(bet>=0 && bet <= chips){
            break;
        }
    }
    cout << "You bet " << bet << " chips.\n" ;
    cout << "******************************\n";
    //dealing first 2 cards
    dealerFirstCard = cards[rand() % 12];
    opScore += dealerFirstCard;
    for(int i = 0; i < 2; i++){
        score += cards[rand() % 12];
        if(i=1){
            opScore += cards[rand() % 12];
        }
    }
    cout << "The dealer's first card is " << dealerFirstCard << ". \n";

    while(input != 's'){
        if(score >= 21){
            break;
        }
        cout << "Your cards value are " << score << ". \n";
        cout << "Do you want to hit (h) or stay (s)? \n";
        input = 0;
        //hit or stay
        while(input != 'h'|| input != 's'){
            cin >> input;
            if(input == 'h' || input == 's'){
                break;
            }
        }
        if(input == 'h'){
            drawnCard = cards[rand() % 12];
            score += drawnCard;
            cout << "You drew a(n) " << drawnCard << ". \n";
        }
    }
        //deal cards for op
        for(int i = 0; i < 2; i++){
        opScore += cards[rand() % 12];
        }
    cout << "Your score is " << score << endl;
    cout << "The dealer's score is " << opScore << endl;

    //declare winner
    if(score == 21 && opScore != 21) {
        cout << "Blackjack! You win! (+" << bet << " chips.)\n";
        chips+=bet;
    } else if(score > 21) {
        cout << "You bust. You lose. (-" << bet << " chips.)\n";
        chips-=bet;
    } else if(opScore == 21){
        cout << "The dealer got a blackjack. You lose. (-" << bet << " chips.)\n";
        chips-=bet;
    } else if(opScore > 21) {
        cout << "The dealer busted. You win! (+" << bet << " chips.)\n";
        chips+=bet;
    } else if(score > opScore){
        cout << "You win. (+" << bet << " chips.)\n";
        chips+=bet;
    } else if(score < opScore){
        cout << "You lose. (-" << bet << " chips.)";

    } else if(score == opScore){
        cout << "Push. Tie game. (+0 chips.)\n";
    }
    if(chips == 0){
        cout << "You are out of chips.\n";
        break;
    }
}
    return 0;
}