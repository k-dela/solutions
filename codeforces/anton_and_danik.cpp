// https://codeforces.com/contest/677/problem/B
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 0;

  string s;

  cin >> n;
  cin >> s;

  int antonCount = 0;
  int danikCount = 0;

  for(int i = 0; i < n; i++){
    if(s[i] == 'A'){
      antonCount += 1;
    }else if(s[i] == 'D'){
      danikCount += 1;
    }
  }

  string result = "Friendship";

  if(antonCount > danikCount){
    result = "Anton";
  }else if(danikCount > antonCount){
    result = "Danik";
  }

  cout << result << endl;
}

