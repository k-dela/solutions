#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int exiting , entering;

  int numOfPeople = 0;
  int capacity = 0;

  for(int i = 0; i < n; i++){
    cin >> exiting >> entering;

    numOfPeople -= exiting;
    numOfPeople += entering;

    if(numOfPeople > capacity){
      capacity = numOfPeople;
    }
  }

  cout << capacity << endl;
  return 0;
}
