#include<iostream>
using namespace std;

int main(){
    int y1, y2;

    cin >> y1 >> y2;

    for(int i=y1; i<=y2; i++){
        if(i%4==0)
            cout << i << " ";
    }

    return 0;
}
