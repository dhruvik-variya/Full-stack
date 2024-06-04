#include<iostream>
using namespace std;

int main(){
    int num, K;

    cin >> num >> K;

    for(int i=1; i<=num; i++){
        if(i%K==0)
            cout << i << endl;
    }

    return 0;
}
