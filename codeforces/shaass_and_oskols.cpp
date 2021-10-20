// https://codeforces.com/contest/294/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int birdsPerWire[n];
  for(int i = 0; i < n; i++){
    cin >> birdsPerWire[i];
  }

  int m;
  cin >> m;
  int x, y;

  int birdsOnWire,birdsToTheR, birdsToTheL;

  for(int i = 0; i < m; i++){
    cin >> x >> y;

    // Make x zero based;
    x -= 1;
   //cout << "index of wire: "<< x << endl;


   birdsOnWire = birdsPerWire[x];
   birdsToTheR = birdsOnWire - y;
   birdsToTheL = y - 1;

   //cout << "Current wire " << x << endl;
   //cout << "Brids on current " << birdsOnWire << endl;
   //cout << "Birds to the r " << birdsToTheR << endl;
   //cout << "Birds to the l " << birdsToTheL << endl;

   //cout << "   " << endl;

   if(x == 0){
     birdsPerWire[x + 1] += birdsToTheR;
   }else if(x == (n - 1)){
     birdsPerWire[x - 1] += birdsToTheL;
   }else{
     birdsPerWire[x + 1] += birdsToTheR;
     birdsPerWire[x - 1] += birdsToTheL;
   }

   birdsPerWire[x] = 0;
  }
  //cout << "Output starts here" << endl;
  for(int i = 0; i < n; i++){
    cout << birdsPerWire[i] << endl;
  }


}
