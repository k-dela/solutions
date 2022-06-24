#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int days[7];
  int pagesRead = 0;

  for(int i = 0; i < 7; i++){
    cin >> days[i];

    pagesRead += days[i];

    if(pagesRead >= n){
      cout << i+1 << endl;
      return 0;
    }
  }

  // cout << "--------" << endl;
  // cout << pagesRead << endl;
  // cout << "--------" << endl;

  int i = 0;
  while(true){
    pagesRead += days[i];
    //cout << i << " " << days[i] << " " << pagesRead << endl;
    if(pagesRead >= n){
      cout << i+1 << endl;
      return 0;
    }

    if(i == 6){
      i = 0;
      continue;
    }

    i += 1;
  }
  
  return 0;
}
