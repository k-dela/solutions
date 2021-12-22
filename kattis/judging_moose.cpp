#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int l, r;
  cin >> l >> r;

  if(l == 0 && r == 0){
    cout << "Not a moose" << endl;
    return 0;
  }

  if(l !=  r){
    cout << "Odd" << " ";
    if(l > r){
      cout << l * 2 << endl;
    }else{
      cout << r * 2 << endl;
    }
  }else{
    cout << "Even" << " " << r * 2 << endl;
  }

  return 0;
} 
