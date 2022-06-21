#include <bits/stdc++.h>
using namespace std;


int main() {
  int n;
  cin >> n;

  int onesInL = 0;
  int onesInR = 0;

  int l,r;
  for(int i = 0; i < n; i++){
    cin >> l >> r;

    if(l == 1) {
      onesInL += 1;
    }

    if(r == 1){
      onesInR += 1;
    }
  }

  int doorsToChangeL = 0;
  int doorsToChangeR = 0;

  if(onesInL >= (n-onesInL)){
    doorsToChangeL = n - onesInL;
  }else{
    doorsToChangeL = onesInL;
  }

  if(onesInR >= (n-onesInR)){
    doorsToChangeR = n - onesInR;
  }else{
    doorsToChangeR = onesInR;
  }

  cout << (doorsToChangeL + doorsToChangeR) << endl;
  return 0;
}
