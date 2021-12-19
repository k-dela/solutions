#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  float q, y;
  float result = 0;

  for(int i = 0; i < n; i++){
    cin >>  q >> y;
    result += (q * y);
  }

  cout << result << endl;
} 
