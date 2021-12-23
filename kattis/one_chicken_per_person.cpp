#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  if(n > m){
    int piecesNeeded = abs(n - m);
    if(piecesNeeded == 1){
      cout << "Dr. Chaz needs " << piecesNeeded << " more piece of chicken!" << endl;
    }else{
      cout << "Dr. Chaz needs " << piecesNeeded << " more pieces of chicken!" << endl;
    }
  }else{
    int piecesLeft = abs(n - m);
    if(piecesLeft == 1){
      cout << "Dr. Chaz will have " << piecesLeft << " piece of chicken left over!" << endl;
    }else{
      cout << "Dr. Chaz will have " << piecesLeft << " pieces of chicken left over!" << endl;
    }
  }
} 
