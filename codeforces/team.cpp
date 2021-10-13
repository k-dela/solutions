// https://codeforces.com/contest/231/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int p, v, t;
  int addition;

  int problemCount = 0;

  for(int i = 0; i < n; i++){
    cin >> p >> v >> t;
    addition = p + v + t;

    if(addition >= 2){
      problemCount += 1;
    }
  }

  cout << problemCount << endl;
}

