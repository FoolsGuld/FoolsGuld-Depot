#include<iostream>
#include<cmath>

using namespace std;

int main() {
    double x1;
    double x2;
    double y1;
    double y2;

    double distance;

    while(true) {
        cout<<"x1 >>";
        cin>>x1;
        cout<<"\ny1 >>";
        cin>>y1;

        cout<<"\nx2 >>";
        cin>>x2;
        cout<<"\ny2 >>";
        cin>>y2;

        distance = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
        cout<<"sqrt of "<<distance<<" = "<<sqrt(distance)<<".\n";
    }

    return 0;
}