#include <bits/stdc++.h>
using namespace std;


int main() {
  int n;
  cin >> n;

  int num;

  pair<int,int> smallNum;
  pair<int,int> largeNum;

  for(int i = 1; i <= n; i++){
    cin >> num;

    if(smallNum.first == 0){
      smallNum.first = num;
      smallNum.second = i;
    }


    if(num <= smallNum.first){
      smallNum.first = num;
      smallNum.second = i;
    }
    if(num > largeNum.first){
      largeNum.first = num;
      largeNum.second = i;
    }
  }

  // cout << smallNum.first << " " << smallNum.second << endl;
  // cout << largeNum.first << " " << largeNum.second << endl;

  if(smallNum.second < largeNum.second){
    largeNum.second -= 1;
  }

  // cout << smallNum.first << " " << smallNum.second << endl;
  // cout << largeNum.first << " " << largeNum.second << endl;

  int result = (n - smallNum.second) + (largeNum.second - 1);

  cout << result << endl;

  return 0;
}
