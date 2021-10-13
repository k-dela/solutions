// https://codeforces.com/contest/791/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int counterOfYears = 0;
  
  while(a <= b){
    a = a * 3;
    b = b * 2;

    counterOfYears += 1;
  }

  cout << counterOfYears << endl;
}

