#include <iostream>
using namespace std;

int main(){
    int n,ways = 0;
    cin >> n;

    for(int i = 1 ; i <= n; i++){
        int sum = 0;
        for(int j = i ; j <= n ; j++){
            sum += j;
            if(sum > n) break;
            if(sum == n){
                ways++;
                break;
            }
        }
    }

    cout << ways << endl;
}