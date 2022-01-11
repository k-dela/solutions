#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
 
int main(){
  int N;
  cin >> N;
 
  int currentPrice;
 
  for(int i = 1; i <= N; i++){
    currentPrice = floor(i * 1.08);
    if(currentPrice == N){
      //cout << i * 1.08 << endl;
      //cout << currentPrice << endl;
      cout << i << endl;
      return 0;
    }
  }
 
  cout << ":(" << endl;
}
