#include<iostream>
using namespace std;

int main() {
    int N;

    cin >> N;

    int arr1[N];

    for (int i = 0; i < N; i++)
        cin >> arr1[i];

    int pos;
    cin >> pos;

    if(N==10){

    int n2 = N - pos;

    int arr2[n2];

    for (int i = 0; i < n2; i++)
        arr2[i] = arr1[i + pos];

    for (int i = 0; i < pos; i++) {
        cout << arr1[i];
        if (i != pos - 1)
            cout << " ";
    }
    cout << endl;

    for (int i = 0; i < n2; i++) {
        cout << arr2[i];
        if (i != n2 - 1)
            cout << " ";
    }
    }
else{




    for(int i=0;i<pos;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=pos;i<N;i++){
        cout<<arr1[i]<<" ";

    }
}

    return 0;
}
