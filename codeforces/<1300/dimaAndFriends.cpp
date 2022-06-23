#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int sumOfFingers = 0;
  int fingers;
  for(int i = 0; i < n; i++){
    cin >> fingers;
    sumOfFingers += fingers;
  }
  //cout << "sum " << sumOfFingers << endl;
  int totalOfPeople = n+1;
  //cout << "Total " << totalOfPeople << endl;

  int caseCounter = 0;
  int remainder = 0;
  for(int i = 1; i <= 5; i++){
    
    remainder = (sumOfFingers + i) % totalOfPeople;
    //cout  << "remainder for " << i << " " << remainder << endl;
    if(remainder == 0 || remainder > 1){
      caseCounter += 1;
    }
  }

  cout << caseCounter << endl;

  
}
