#include <iostream>
#include <map>
#include <string>
#include <iomanip>
using namespace std;
int main(){
    map<string,int> m;
    string s;
    double all = 0.0;
    while(getline(cin,s)){
        all++;
        if(m.find(s) != m.end()){
            m[s]++;
        }else{
            m[s] = 1;
        }
    }
    for (std::map<string,int>::iterator it=m.begin(); it!=m.end(); ++it){
        cout << it-> first << " ";
        printf("%.4f\n",(it->second / all) * 100); 
    }
}