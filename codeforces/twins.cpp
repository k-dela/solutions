//https://codeforces.com/contest/160/problem/A
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  int allCoins[n];
  int totalMoney = 0;
  for(int i = 0; i < n; i++){
    cin >> allCoins[i];

    totalMoney += allCoins[i];
  }

  sort(allCoins, allCoins + n, greater<int>());

  int myMoney = 0;
  int numOfMyCoins = 0;

  for(int i = 0; i < n; i++){
    if(myMoney <= totalMoney){
      myMoney += allCoins[i];
      totalMoney -= allCoins[i];

      numOfMyCoins += 1;
    }else{
      break;
    }
  }

  cout << numOfMyCoins << endl;
} 
