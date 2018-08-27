#include <iostream>
#include <cmath>
#include <iomanip>
#define M_PI 3.14159265358979323846
using namespace std;

float solve(float R,int n){
    return R/(1.0/sin(M_PI/n)+1.0);
}

int main(){
    int t,n,cnt = 1;
    float R;
    cin >> t;
    while(t--){
        cin >> R >> n;
        cout << "Scenario #" << cnt++ << endl; 
        cout << setprecision(3) << fixed << solve(R,n) << endl;
    }
    cout << endl;
}