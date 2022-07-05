#include <bits/stdc++.h>
using namespace std;

int main() {
  string sequence;
  cin >> sequence;

  int currLenTracker = 0;
  int maxLenTracker =0;
  for(int i = 0; i < sequence.size(); i++){
    if(i == 0){
      currLenTracker = 1;
      maxLenTracker = 1;
      continue;
    }

    if(sequence[i] == sequence[i-1]){
      currLenTracker += 1;
    }else{
      currLenTracker = 1;
    }

    if(currLenTracker > maxLenTracker){
      maxLenTracker = currLenTracker;
    }
  }


  cout << maxLenTracker << endl;
  return 0;
}
