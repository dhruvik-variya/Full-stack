#include<iostream>
using namespace std;

int main(){
    int N;

    cin >> N;

    for(int i=1; i<=N; i++){
    
        for(int s=1; s<=N-i; s++){
            cout << "_ ";
        }

        for(int j=1; j<=i; j++){
            cout << j;
            if(j!=i)
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}
