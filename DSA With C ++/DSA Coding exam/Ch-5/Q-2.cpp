#include<iostream>
using namespace std;

int main(){
    int num, ans=0;

    cin >> num;

    for(int i=0; i<=num; i+=2){
        ans+=i;
    }

    cout << ans << endl;

    return 0;
}
