#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  string bCode;
  cin >> bCode;

  int len = bCode.length();

  string result = "";

  for(int i = 0; i < len; i++){
    if(bCode[i] == '.'){
      result += '0';
    }else{
      if(bCode[i+1] == '.'){
        result += '1';
      }else{
        result += '2';
      }

      i += 1;
    }
  }

  cout << result << endl;
} 
