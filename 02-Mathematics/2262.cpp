#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int number){
    for(int i = 2 ; i <= sqrt((double)number) ; i++){
        if(number % i == 0){
            return false;
        }
    }

    return true;
}

int main(){
    int number;
    while(cin >> number){
        if(number == 0) break;
        for(int i = 2 ; i <= number / 2 ; i++){
            int flags = 0;
            if(isPrime(i)){
                flags++;
            }else continue;
            if(isPrime(number - i)){
                flags++;
            }
            if(flags == 2){
                cout << number << " = " << i << " + " << (number - i) << endl;
                break;
            }
        }
    }
}