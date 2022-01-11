#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
  int N, M, C;
  cin >> N >> M >> C;

  int b[M];
  for(int i = 0; i < M; i++){
    cin >> b[i];
  }

  int a;
  int currOperation = 0;
  int counter = 0;

  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      cin >> a;
      currOperation += (a * b[j]);
    }

    currOperation += C;

    //cout << "currOperation " << currOperation << endl;

    if(currOperation > 0){
      counter += 1;
    }

    currOperation = 0;
  }

  cout << counter << endl;
}
