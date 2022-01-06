#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;

  if(n <= 3){
    if(n == 1){
      cout << n << endl;
    }else{
     cout << "NO SOLUTION" << endl;
    }
    return 0;
  }

  vector<int> evenNums;
  vector<int> oddNums;

  for(int i = 1; i <= n; i++){
    if(i % 2 == 0){
      evenNums.push_back(i);
    }else{
      oddNums.push_back(i);
    }
  }

  for(int i = 0; i < evenNums.size(); i++){
    cout << evenNums[i] << " ";
  }

  for(int i = 0; i < oddNums.size(); i++){
    cout << oddNums[i] << " ";
  }

  cout << "" << endl;
}
