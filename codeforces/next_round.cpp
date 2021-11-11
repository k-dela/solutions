// https://codeforces.com/contest/158/problem/A
#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k;
  cin >> n >> k;

  int scores[n];
  for(int i = 0; i < n; i++){
    cin >> scores[i];
  }

  if(scores[0] == 0){
    cout << 0 << endl;
    return 0;
  }

  int valueAtK = scores[k-1];

  int counter = 0;

  for(int i = 0; i < n; i++){
    if(valueAtK <= 0){
      if(scores[i] > valueAtK){
        counter += 1;
      }
    }else{
      if(scores[i] >= valueAtK){
        counter += 1;
      }
    }
  }

  cout << counter << endl;
}
