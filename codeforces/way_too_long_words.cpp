// https://codeforces.com/contest/71/problem/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  string word;
  int numBetweenFL;

  for(int i = 0; i < n; i++){
    cin >> word;

    if(word.length() > 10){
      numBetweenFL = word.length() - 2;
      word = word[0] + to_string(numBetweenFL) + word[word.length() -1];
    }
    cout << word << endl;
  }
}
