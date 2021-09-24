#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> numbers;
  int tempN;
  for(int i = 0; i < (n-1); i++){
    cin >> tempN;
    numbers.push_back(tempN);
  }
  
  int temp;

  sort(numbers.begin(), numbers.end());


  int missingNum = 1;

  while(missingNum <= n){
    if(numbers[missingNum - 1] != missingNum){
      cout << missingNum << endl;
      break;
    }
    missingNum += 1;
  }
}
