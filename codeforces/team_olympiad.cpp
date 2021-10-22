// https://codeforces.com/contest/490/problem/A
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  int t;

  vector <int> ones;
  vector <int> twos;
  vector <int> threes;

  for(int i = 0; i < n; i++){
    cin >> t;
    if(t == 1){
      ones.push_back(i+1);
    }else if(t == 2){
      twos.push_back(i+1);
    }else{
      threes.push_back(i+1);
    }
  }

  int onesSize = ones.size();
  int twosSize = twos.size();
  int threesSize = threes.size();

  int w;

  if(onesSize == 0 || twosSize == 0 || threesSize == 0){
    cout << 0 << endl;
    return 0;
  }

  if(onesSize <= twosSize && onesSize <= threesSize){
    w = onesSize;
  }else if(twosSize <= onesSize && twosSize <= threesSize){
    w = twosSize;
  }else{
    w = threesSize;
  }

  cout << w << endl;

  for(int i = 0; i < w; i++){
    cout << ones[i] << " " << twos[i] << " " << threes[i] << endl;
  }
}
