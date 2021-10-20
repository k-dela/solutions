// https://codeforces.com/contest/265/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s;
  cin >> t;

  int position = 0;

  for(int i = 0; i < t.length(); i++){
    if(t[i] == s[position]){
      position += 1;
    }
  }

  cout << position + 1 << endl;
}
