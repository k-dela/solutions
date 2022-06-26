#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int soldiers[n];
  int minimalDiff = -1;
  int currentDiff = 0;
  pair <int,int> positions;
  
  for(int i = 0; i < n; i++){
    cin >> soldiers[i];

    if(i > 0){
      currentDiff = abs(soldiers[i] - soldiers[i-1]);
      if(minimalDiff == -1){
        minimalDiff = currentDiff;
      }

      if(currentDiff <= minimalDiff){
        minimalDiff = currentDiff;
        positions.first = i+1;
        positions.second = i;
      }
    }
  }

  if(abs(soldiers[0] - soldiers[n-1]) < minimalDiff){
    //cout << "this ran" << endl;
    positions.first = 1;
    positions.second = n;
  }

  cout << positions.first << " " << positions.second;
  return 0;
}
