#include <bits/stdc++.h>
using namespace std;

int main() {
  string gName;
  cin >> gName;

  string hName;
  cin >> hName;

  string pile;
  cin >> pile;

  map<char,int> pileLetters;
  for(auto &letter : pile){
    if(pileLetters.find(letter) != pileLetters.end()){
      pileLetters[letter] += 1;
    }else{
      pileLetters[letter] = 1;
    }
  }

  // for(auto &item : pileLetters){
  //   cout << item.first << " " << item.second << endl;
  // }

  // cout << "----" << endl;
  
  for(auto &letter : gName){
    if(pileLetters.find(letter) == pileLetters.end()){
      cout << "NO" << endl;
      return 0;
    }else{
      if(pileLetters[letter] == 0){
        cout << "NO" << endl;
        return  0;
      }

      pileLetters[letter] -= 1;
    }
  }

  // for(auto &item : pileLetters){
  //   cout << item.first << " " << item.second << endl;
  // }

  // cout << "----" << endl;

  for(auto &letter : hName){
    if(pileLetters.find(letter) == pileLetters.end()){
      cout << "NO" << endl;
      return 0;
    }else{
      if(pileLetters[letter] == 0){
        cout << "NO" << endl;
        return  0;
      }

      pileLetters[letter] -= 1;
    }
  }

  // for(auto &item : pileLetters){
  //   cout << item.first << " " << item.second << endl;
  // }

  // cout << "----" << endl;

  for(auto &item : pileLetters){
    if(item.second != 0){
      cout << "NO" << endl;
      return 0;
    }
  }
  

  cout << "YES" << endl;
  return 0;
}
