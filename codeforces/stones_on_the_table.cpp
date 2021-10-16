// https://codeforces.com/contest/381/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  string s;
  cin >> s;

  int counter = 0;

  for(int i = 0; i < n; i++){
    if(s[i] == s[i + 1]){
      counter += 1;
    }
  }

  cout << counter << endl;
}
