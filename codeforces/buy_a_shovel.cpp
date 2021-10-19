// https://codeforces.com/contest/732/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
  int k, r;
  cin >> k >> r;

  bool stop = false;

  int numOfShovels = 1;
  int totalForShovels = numOfShovels * k;

  int amountOfMoney = 0;

  while(!stop){
    amountOfMoney = (totalForShovels/10) * 10;

    if(amountOfMoney == totalForShovels){
      stop = true;
    }else{
      amountOfMoney += r;

      if(amountOfMoney == totalForShovels){
        stop = true;
      }else{
        amountOfMoney = 0;
        numOfShovels += 1;
        totalForShovels = numOfShovels * k;
      }
    }
  }

  cout << numOfShovels << endl;
}
