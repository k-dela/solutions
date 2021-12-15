#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
  int y;
  cin >> y;

  string s = "";
  set<char> digits;
  while(true){
    y += 1;
    s = to_string(y);

    for(int i = 0; i < s.length(); i++){
      digits.insert(s[i]);
    }

    if(digits.size() == s.length()){
      break;
    }else{
      digits.clear();
    }
  }

  cout << s << endl;

} 
