#include <iostream>
using namespace std;

int zeros(int number){
    int zero = 0;

    for(int i = 5 ; i <= number ; i*=5){
        zero += (number / i);
    }

    return zero;
}

int main(){
    int t,x;
    cin >> t;
    while(t--){
        cin >> x;
        cout << zeros(x) << endl;
    }
}