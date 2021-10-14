// https://codeforces.com/contest/59/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int numOfUpperCase = 0;
  int numOfLowerCase = 0;

  for(int i = 0; i < s.length(); i++){
    if(isupper(s[i])){
      numOfUpperCase += 1;
    }else{
      numOfLowerCase += 1;
    }
  }

  if(numOfLowerCase >= numOfUpperCase){
    for(int i = 0; i < s.length(); i++){
      s[i] = tolower(s[i]);
    } 
  }else{
    for(int i = 0; i < s.length(); i++){
      s[i] = toupper(s[i]);
    } 
  }

  cout << s << endl;
}
