// https://codeforces.com/contest/567/problem/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int coordinates[n];

  for(int  i = 0; i < n; i++){
    cin >> coordinates[i];
  }

  // Max and min distances 
  int max;
  int min;

  // Distance to next and last city
  int r;
  int l;

  for(int  i = 0; i < n; i++){
    if(i == 0){
      min = abs(coordinates[i] - coordinates[i+1]);
      max = abs(coordinates[i] - coordinates[n-1]);
    }else if(i == n-1){
      min = abs(coordinates[i] - coordinates[i-1]);
      max = abs(coordinates[i] - coordinates[0]);
    }else{
      // Use l and r to find min
      r = abs(coordinates[i] - coordinates[i+1]);
      l = abs(coordinates[i] - coordinates[i-1]);
      min = (l < r) ? l : r;

      // Use l and r to find max
      r = abs(coordinates[i] - coordinates[n-1]);
      l = abs(coordinates[i] - coordinates[0]);
      max = (r > l) ? r : l;
    }

    cout << min << " " << max << endl;
  }

}
