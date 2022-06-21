#include <bits/stdc++.h>
using namespace std;


int main() {
  int n;
  cin >> n;

  int pointsEarned;
  cin >> pointsEarned;

  int max = pointsEarned;
  int min = pointsEarned;

  int counter = 0;

  for(int i = 0; i < n-1; i++){
    cin >> pointsEarned;

    if(pointsEarned > max){
      counter += 1;
      max = pointsEarned;
    }

    if(pointsEarned < min){
      counter += 1;
      min = pointsEarned;
    }
    
  }

  cout << counter << endl;
}
