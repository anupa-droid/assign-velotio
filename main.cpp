#include<bits/stdc++.h>
using namespace std;


int main(){
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);

    string str;
    cin >> str;
    unordered_map<char,int> mp;
    for(char cr : str){
      if(!((cr >= 65 && cr<=90) || (cr >=97 && cr<=122))){
        mp[cr]++;
      }
    }

    for(auto i : mp){
      cout << i.first << " " << i.second << endl;
    }
  
  return 0;
}
    