#include<iostream>
using namespace std;

int main(){
    int N;

    cin >> N;

    for(int i=N; i>=1; i--){

        for(int s=1; s<=N-i; s++){
            cout << "_ ";
        }

        for(int j=i; j>=1; j--)
        {
            cout << j;
            if(j!=1){
                cout << " ";
            }
        }

        cout << endl;
    }
}
