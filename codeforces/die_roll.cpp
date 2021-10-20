// https://codeforces.com/contest/9/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
  int y,w;
  cin >> y >> w;

  int numerator = 0;

  if(y == w || y > w){
    numerator = 7 - y;
  }else{
    numerator = 7 - w;
  }

  int denominator = 6;

  for(int i = 2; i <= 6; i++){
    if((numerator % i == 0) && (denominator % i == 0)){
      numerator = numerator / i;
      denominator = denominator / i;
    }
  }

  cout << numerator << "/" << denominator << endl;

}
