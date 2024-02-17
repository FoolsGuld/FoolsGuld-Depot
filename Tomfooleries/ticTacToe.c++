#include <iostream>
#include <ctime>

    using namespace std;

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main() {
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'x';
    char computer = 'o';
    bool running = true;

    cout << "\n************************\n";
    drawBoard(spaces);

    while(running){
        //player move
        playerMove(spaces, player);
        drawBoard(spaces);
        cout << "\n************************\n";
        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
        else if(checkTie(spaces)){
            running = false;
            break;
        }
        //comp move
        computerMove(spaces, computer);
        drawBoard(spaces);
        cout << "\n************************\n";
        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
        else if(checkTie(spaces)){
            running = false;
            break;
        }
    }
    cout << "\n************************\n";

    return 0;
}

void drawBoard(char *spaces){
    cout << '\n';
    cout << "1    |2    |3    " << endl;
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |   " << spaces[2] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "4    |5    |6    " << endl;
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |   " << spaces[5] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "7    |8    |9    " << endl;
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |   " << spaces[8] << "  " << endl;
    cout << "     |     |     " << endl;
    cout << '\n';
}
void playerMove(char *spaces, char player){
    int num;
    do {
        cout << "Enter choordinate (1-9):" << endl;
        cin >> num;
        num--;
        if(spaces[num] == ' '){
            spaces[num] = player;
            break;

        }
    }while(!num > 0 || !num < 8);
}
void computerMove(char *spaces, char computer){
    int num;
    srand(time(0));

    while(true){
        num = rand() % 9;
        if(spaces[num] == ' '){
            spaces[num] = computer;
            break;
        }

    }

}
bool checkWinner(char *spaces, char player, char computer){
    //rows 1-3
    if(spaces[0] == spaces[1] && spaces[1] == spaces[2] && spaces[0] != ' '){
        if(spaces[0] == player){
            cout << "Victory!" << endl;
        } else{
            cout << "You lost." << endl;
        }
    }
    else if(spaces[3] == spaces[4] && spaces[4] == spaces[5] && spaces[3] != ' '){
        if(spaces[3] == player){
            cout << "Victory!" << endl;
        } else{
            cout << "You lost." << endl;
        }
    } 
    else if(spaces[6] == spaces[7] && spaces[7] == spaces[8] && spaces[8] != ' '){
        if(spaces[6] == player){
            cout << "Victory!" << endl;
        } else{
            cout << "You lost." << endl;
        }
    }
    //columns 1-3
    else if(spaces[0] == spaces[3] && spaces[3] == spaces[6] && spaces[0] != ' '){
        if(spaces[0] == player){
            cout << "Victory!" << endl;
        } else{
            cout << "You lost." << endl;
        }
    }
    else if(spaces[1] == spaces[4] && spaces[4] == spaces[7] && spaces[1] != ' '){
        if(spaces[1] == player){
            cout << "Victory!" << endl;
        } else{
            cout << "You lost." << endl;
        }
    }
    else if(spaces[2] == spaces[5] && spaces[5] == spaces[8] && spaces[2] != ' '){
        if(spaces[2] == player){
            cout << "Victory!" << endl;
        } else{
            cout << "You lost." << endl;
        }
    }
    //diagnol lines
    else if(spaces[0] == spaces[4] && spaces[4] == spaces[8] && spaces[0] != ' '){
        if(spaces[0] == player){
            cout << "Victory!" << endl;
        } else{
            cout << "You lost." << endl;
        }
    }
    else if(spaces[2] == spaces[4] && spaces[4] == spaces[6] && spaces[2] != ' '){
        if(spaces[2] == player){
            cout << "Victory!" << endl;
        } else{
            cout << "You lost." << endl;
        }
    }
    else{
        return false;
    }

    return true;
}
bool checkTie(char *spaces){

    for(int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }
    cout << "Stalemate." << endl;
    return true;
}