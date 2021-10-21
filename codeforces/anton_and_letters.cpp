// https://codeforces.com/contest/443/problem/A
#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
  string set;
  getline(cin, set);
  //cout << set.length() << endl;

  if(set.length() <= 2){
    cout << 0 << endl;
    return 0;
  }

  map <char, int> letters;

  for(int i = 0; i < set.length(); i++){
    if(set[i] != ',' && set[i] != '}' && set[i] != '{' && set[i] != ' '){
      if(letters[set[i]]){
        letters[set[i]] += 1;
      }else{
        letters[set[i]] = 1;
      }
    }
  }

  cout << letters.size() << endl;
}
