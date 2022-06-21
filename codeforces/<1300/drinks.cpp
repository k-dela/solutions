#include <bits/stdc++.h>
using namespace std;


int main() {
  int n;
  cin >> n;

  float sum = 0;
  int num;
  for(int i = 0; i < n; i++){
    cin >> num;
    sum += num;
  }

  float result = (sum / (n*100)) * 100;

  cout << result << endl;
  return 0;
}
