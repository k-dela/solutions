#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int a,b,c,n;
  cin >> a >> b >> c >> n;

  if(n < 3){
    cout << "NO" << endl;
    return 0;
  }

  int numOfProblems = a + b + c;

  if(a >= 1 && b >= 1 && c >= 1 && numOfProblems >= n){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
} 
