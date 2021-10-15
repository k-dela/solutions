// https://codeforces.com/contest/344/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int numOfGroups = 0;
  string currentMagnet;
  vector <string> magnets;


  for(int i = 0; i < n; i++){
    cin >> currentMagnet;
    magnets.push_back(currentMagnet);
  }

  for(int i = 0; i < n; i++){
    if(magnets[i] != magnets[i+1]){
      numOfGroups += 1;
    }
  }

  cout << numOfGroups << endl;
}
