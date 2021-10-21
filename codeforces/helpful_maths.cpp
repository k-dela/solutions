// https://codeforces.com/contest/339/problem/A
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
  string s;
  cin >> s;

  if(s.length() == 1){
    cout << s << endl;
    return 0;
  }
  vector<int> numbers;

  for(int i = 0; i < s.length(); i++){
    if(i == 0 || i % 2 == 0){
      numbers.push_back((int)s[i] - 48);
    }
  }

  sort(numbers.begin(), numbers.end());
  string result = "";

  for(int i = 0; i < numbers.size(); i++){
    if(i == numbers.size() - 1){
      cout << numbers[i];
    }else{
      cout << numbers[i] <<"+";
    }
  }

}

