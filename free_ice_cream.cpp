// https://codeforces.com/contest/686/problem/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  long long int x;
  cin >> n >> x;

  char operationSymbol;
  long long int numberAmount;

  int numDistressedKids = 0;

  //cout << " " << endl;


  for(int i = 0; i < n; i++){
    cin >> operationSymbol >> numberAmount;
    //cout << "Before" << endl;
    //cout << x << " "<< numberAmount <<" " << numDistressedKids<< endl;

    if(operationSymbol == '+'){
      x = x + numberAmount;
    }else{
      if(x >= numberAmount){
        x -= numberAmount;
      }else{
        numDistressedKids += 1;
      }
    }

    //cout << x << " "<<numberAmount << " " << numDistressedKids << endl;
    //cout << " " << endl;
  }

  cout << x << " " << numDistressedKids<< endl;
}

