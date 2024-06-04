#include<iostream>
using namespace std;

int main() {
    int N;

    cin >> N;

    int arr[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i != j && arr[i][j] != 0) { 
                cout << "This is not a diagonal matrix" << endl;
                return 0; 
            }
        }
    }

    cout << "This is a diagonal matrix" << endl;

    return 0;
}
