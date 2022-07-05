#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  long currNum;
  long prevNum;

  long long moveCounter = 0;
  for(int i = 0; i < n; i++){
    cin >> currNum;
    
    if(i == 0){
      prevNum = currNum;
      continue;
    }

    if(currNum < prevNum){
      moveCounter += (prevNum-currNum);
    }else{
      prevNum = currNum;
    }
  }

  cout << moveCounter << endl;
  return 0;
}
