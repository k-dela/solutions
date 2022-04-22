#include <iostream>
using namespace std;

int main() {
  long long n;
  cin >> n;

  string nS = to_string(n);
  int lenS = nS.length();

  int luckyDigitCounter = 0;
  
  for(int i = 0; i < lenS; i++){
    if(nS[i] == '4' || nS[i] == '7'){
      luckyDigitCounter += 1;
    }
  }

  //cout << "Lucky digit count: " << luckyDigitCounter << endl;

  string luckyDigitCounterS = to_string(luckyDigitCounter);

  //cout << "Lucky digit count string " << luckyDigitCounterS << endl;

  //cout << "Comparison: "<< (luckyDigitCounterS[0] != '4' || luckyDigitCounterS[0] != '7') << endl;

  for(int i = 0; i < luckyDigitCounterS.length(); i++){
    if(luckyDigitCounterS[i] != '4' && luckyDigitCounterS[i] != '7'){
      cout << "NO" << endl;
      return 0;
    }
  }


  cout << "YES" << endl;
  return 0;
}
