#include<iostream>
using namespace std;

int main(){
    int N, R;

    cin >> N;

    int arr[N];

    for(int i=0; i<N; i++){
        cin >> arr[i];
    }

    cin >> R;

    for(int i=0; i<N; i++){
        cout << arr[(i+R) % N];
        if(i!=N-1)
            cout << " ";
    }

    return 0;
}
