#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int x, n;
  cin >> x;
  cin >> n;

  int p;
  int sumOfP = 0;

  for(int i = 0; i < n; i++){
    cin >> p;
    sumOfP += p;
  }

  int result = (x * n) - sumOfP + x;

  cout << result << endl;
} 
