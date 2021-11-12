// https://codeforces.com/contest/474/problem/A
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

  char direction;
  cin >> direction;

  string input;
  cin >> input;

  string result = "";

  for(int i = 0; i < input.length(); i++){
    for(int j = 0; j < keyboard.length(); j++){
      if(keyboard[j] == input[i]){
        if(direction == 'R'){
          result += keyboard[j-1];
        }else{
          result += keyboard[j+1];
        }
      }
    }
  }

  cout << result << endl;
} 
