#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
  int a, b;
  cin >> a >> b;

  int numOfSockets = 1;
  int counter = 0;

  while(numOfSockets < b){
    numOfSockets += (a-1);
    counter += 1;
  }

  //cout << numOfSockets << endl;
  cout << counter << endl;

  return 0;
}
