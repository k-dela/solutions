#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  if(n == 1){
    cout << 1 << endl;
    return 0;
  }

  if(n == 3 || n == 2){
    cout << "NO SOLUTION" << endl;
    return 0;
  }

  // Print all even numbers
  for(int i = 2; i <=  n; i += 2){
    cout << i << " ";
  }
  
  // Then print all odd numbers
  for(int i = 1; i <= n; i += 2){
    cout << i << " ";
  }

  cout << endl;
  return 0;
}
