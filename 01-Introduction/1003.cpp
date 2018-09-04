#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float m;
    while(cin >> m){
        if(m == 0.00){
            break;
        }

        float s = 0;
        int i = 0;
        while(s < m){
            ++i;
            s += 1.0 / (i + 1);
        }

        cout << i << " card(s)" << endl;
    }
}