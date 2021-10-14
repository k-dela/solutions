// https://codeforces.com/contest/405/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> cubes;
  int cube;
  for(int i = 0; i < n; i++){
    cin >> cube;
    cubes.push_back(cube);
  }

  int temp;

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n-1; j++){
      if(cubes[j] > cubes[j+1]){
        temp = cubes[j+1];
        cubes[j+1] = cubes[j];
        cubes[j] = temp;
      }
    }
  }

  for(int i = 0; i < n; i++){
    cout << cubes[i] << " " ;
  }
}
