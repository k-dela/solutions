#include <bits/stdc++.h>
using namespace std;

int main() {
  string username;
  cin >> username;

  set<char> uniqueCharacters;

  for(auto &character : username){
    uniqueCharacters.insert(character);
  }

  if(uniqueCharacters.size() % 2 == 0){
    cout << "CHAT WITH HER!" << endl;
  }else{
    cout << "IGNORE HIM!" << endl;
  }

  return 0;
}
