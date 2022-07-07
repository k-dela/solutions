#include <bits/stdc++.h>
using namespace std;

int main() {
  int numOfFives = 0;
  int numOfSevens = 0;

  int phrase;
  for(int i = 0; i < 3;i++){
    cin >> phrase;

    if(phrase == 5){
      numOfFives += 1;
    }else if(phrase == 7){
      numOfSevens += 1;
    }
  }


  if(numOfFives == 2 && numOfSevens == 1){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }

  return 0;
}
