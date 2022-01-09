#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;

  int people[N];
  for(int i = 0; i < N; i++){
    cin >> people[i];
  }

  int finalTotalStamina = 0;
  int currentTotalStamina = 0;
  int currentStamina = 0;

  for(int p = 1; p <= 100; p++){
    for(int i = 0; i < N; i++){
      currentStamina = (people[i] - p) * (people[i] - p);
      currentTotalStamina += currentStamina;
      currentStamina = 0; 
    }

    if(p == 1){
      finalTotalStamina = currentTotalStamina;
    }

    if(currentTotalStamina < finalTotalStamina){
      finalTotalStamina = currentTotalStamina;
    }

    currentTotalStamina = 0;
  }

  cout << finalTotalStamina << endl;
}
