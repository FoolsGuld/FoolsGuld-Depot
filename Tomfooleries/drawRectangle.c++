#include <iostream>

using namespace std;

int main(){
    int width = 0;
    int height = 0;
    string collumn;
    //input
    cout << "Enter width of the rectangle:" << endl;
    while(width <= 0) {
        cin >> width;
    }
    cout << "Enter height of rectangle:" << endl;
    while(height <= 0) {
        cin >> height;
    }
    //output
    cout << "______________________" << endl;
    cout << "\n";
    for(int j = 0; j < height; j++) {
        for(int i = 0; i < width; i++){
            cout << "█";
        }
        cout << "\n";
    }
    cout << "______________________" << endl;
    return 0;
}