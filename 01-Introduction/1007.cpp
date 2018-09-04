#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int sortedCalculation(string s){
    int ans = 0;
    int n = s.size();
    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n ; j++){
            if(s[i] > s[j]){
                ans++;
            }
        }
    }
    return ans;
}

int main(){
    int n,m;
    string s;
    map<int,vector<string>> map;
    cin >> n >> m;
    
    for(int i = 0 ; i < m ; i++){
        cin >> s;
        map[sortedCalculation(s)].push_back(s);
    }

    for(std::map<int,vector<string>>::iterator it=map.begin(); it!=map.end(); ++it){
        sort(it->second.begin(),it->second.end());
        for(int i = 0 ; i < it->second.size() ; i++){
            cout << it->second[i] << endl;
        }
    }
}