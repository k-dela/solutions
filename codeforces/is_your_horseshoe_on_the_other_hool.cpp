// https://codeforces.com/contest/228/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
  map <int, int> ratio;
  int shoes [4];
  cin >> shoes[0];
  cin >> shoes[1];
  cin >> shoes[2];
  cin >> shoes[3];

  for(int i = 0; i < 4; i++){
    if(ratio[shoes[i]]){
      ratio[shoes[i]] += 1;
    }else{
      ratio[shoes[i]] = 1;
    }
  }
 cout << 4 - ratio.size() << endl;
}
