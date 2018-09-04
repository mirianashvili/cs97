#include <iostream>
#include <string>
#include <math.h>
#include <cstring>
using namespace std;

int main(){
    string s;
    int count[26] = {0};
    int c = 4;

    while(c--) {
      getline(cin,s);
       for(int i = 0 ; i < s.size() ; i++){
           if(s[i] >= 'A' && s[i] <= 'Z'){
               count[s[i] - 'A']++;
           }
       }
    }

    int length = 0;

    for(int i = 0 ; i < 26 ; i++){
        length = max(length,count[i]);
    }


    for(int i = length ; i > 0; i--){
        for(int j = 0 ; j < 26 ; j++){
            if(count[j] >= i){
                cout << "* ";
            }else{
                cout << "  ";
            }
        }
        cout << endl;
    }

    for(int i = 0 ; i < 26 ; i++){
        cout << char('A' + i) << ' ';
    }
}