// https://codeforces.com/contest/677/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n , h;
  cin >> n >> h;

  int width = 0;
  int friendH = 0;

  for(int i = 0; i < n; i++){
    cin >> friendH;

    if(friendH > h){
      width += 2;
    }else {
      width += 1;
    }
  }

  cout << width << endl;
}

