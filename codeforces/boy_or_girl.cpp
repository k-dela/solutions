// https://codeforces.com/contest/112/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
  string userName;
  cin >> userName;

  map <char, int> characters;

  for(int i = 0; i < userName.length(); i++){
    if(characters[userName[i]]){
     characters[userName[i]] += 1;
    }

    characters[userName[i]] += 1;
  }


  int numOfCharacters = characters.size();

  if(numOfCharacters % 2 == 0){
    cout << "CHAT WITH HER!" << endl;
  }else{
    cout << "IGNORE HIM!" << endl;
  }
}
