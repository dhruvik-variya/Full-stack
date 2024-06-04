#include <iostream>
using namespace std;

int main() {
    int N;

    cin >> N;

    int arr[N];

    for (int i = 0; i < N; i++) 
        cin >> arr[i];


    for (int i = 0; i < N; i++) {

        int freq = 1;      
            
        if(arr[i] == -1) continue;

        for (int j = i + 1; j < N; j++) {
            if (arr[i] == arr[j]) {
                freq++;
                arr[j] = -1;
            }
        }        
        cout << arr[i] << " => " << freq << endl;
    }

    return 0;
}
