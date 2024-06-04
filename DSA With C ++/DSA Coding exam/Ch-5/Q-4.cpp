#include<iostream>
using namespace std;

int main(){
    int num, temp=0, temp1=1, fib=0;

    cin >> num;

    for(int i=0; i<num; i++){
        cout << fib << " ";
        temp = temp1+fib;
        fib = temp1;
        temp1 = temp;
    }

    return 0;
}
