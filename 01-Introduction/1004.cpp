#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double amount,sum = 0.0,average;

    for(int i = 0 ; i < 12; i++){
        cin >> amount;
        sum += amount;
    }

    average = sum / 12;
    cout << "$" << average; 
}