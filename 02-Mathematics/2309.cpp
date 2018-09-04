#include <iostream>
#include <cmath>
using namespace std;
 
void solve(int number){
    int all = (int)(log((double)number) / log(2.0));
    int root = (int)pow(2.0,(double)all);
    int level = 0;
   // cout << root << endl;
    while (level < all) {
        if (root == number) {
            break;
        }
 
        if (root > number) {
            root -= (int)pow(2.0, all - level - 1);
            level++;
        }
 
        if (root < number) {
            root += (int)pow(2.0, all - level - 1);
            level++;
        }
    }
 
    int min = number - (int)pow(2.0, all - level) + 1;
    int max = number + (int)pow(2.0, all - level) - 1;
 
    cout << min << " " << max << endl;
}
 
int main(){
    int n,a;
    cin >> n;
    while(n--){
        cin >> a;
        solve(a);
    }
}