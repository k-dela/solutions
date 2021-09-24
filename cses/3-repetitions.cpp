// https://cses.fi/problemset/task/1069/

#include <bits/stdc++.h>
using namespace std;

int main() {
  string n;
  cin >> n;

  int longestTemp = 1;
  vector<int> listOfLong;

  for(int i = 0; i < n.length(); ++i){
    if(n[i] == n[i+1]){
      longestTemp += 1;
    }else{
      listOfLong.push_back(longestTemp);
      longestTemp = 1;
    }
  }

  int longestRepetition = *max_element(listOfLong.begin(), listOfLong.end());

  cout << longestRepetition << endl;
}
