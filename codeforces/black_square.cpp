// https://codeforces.com/contest/431/problem/A?f0a28=1
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b,c,d;
  cin >> a >> b >> c >> d;

  map<char, int> caloriesPerSquare;
  caloriesPerSquare['1'] = a;
  caloriesPerSquare['2'] = b;
  caloriesPerSquare['3'] = c;
  caloriesPerSquare['4'] = d;
  
  string s;
  cin >> s;

  int numOfCalories = 0;

  for(int i = 0; i < s.length(); i++){
    numOfCalories += caloriesPerSquare[s[i]];
    //cout << numOfCalories << endl;
  }

  cout << numOfCalories << endl;

}
