#include<iostream>
using namespace std;

int main(){
    int N;

    cin >> N;

    int arr[N][N], max=0;

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> arr[i][j];

            if(arr[i][j] > max)
                max = arr[i][j];
        }
    }

    cout << max << endl;

    return 0;
}
