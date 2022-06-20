#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, m;
  cin >> n >> m;

  bool isPrime = true;
  int primeCounter = 0;
  
  for(int i = n+1; i <= m; i++){
    for(int j = 2; j < i-1; j++){
      isPrime = true;
      if(i % j == 0){
        isPrime = false;
        break;
      }
    }

    if(isPrime == true){
      if(i == m){
        cout << "YES" << endl;
      }else{
        cout << "NO" << endl;
      }

      return 0;
    }

  }

  cout << "NO" << endl;
  return 0;
}
