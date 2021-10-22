// https://codeforces.com/contest/770/problem/A
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector <char> result;

  vector <char> setOfLetters;

  // ASCII representation of 'a'
  int letter = 97;

  // Create a set of k unique letters from ASCII representation
  for(int i = 0; i < k; i++){
    setOfLetters.push_back(letter);
    letter += 1;
  }

  int indexOfSet = 0;
  int lastIndexOfSet = setOfLetters.size() - 1;

  for(int i = 0; i < n; i++){
    //cout << indexOfSet << endl;
    result.push_back(setOfLetters[indexOfSet]);
    if(indexOfSet == lastIndexOfSet){
      indexOfSet = 0;
    }else{
      indexOfSet += 1;
    }

  }

  for(int i = 0; i < n; i++){
    cout << result[i];
  }

}

