// https://codeforces.com/contest/427/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector <int> events;
  int evento;

  for(int i = 0; i < n; i++){
    cin >> evento;
    events.push_back(evento);
  }

  int numOfPolice = 0;
  int numOfCrime = 0;

  for(int i = 0; i < n; i++){
    if(events[i] > 0){
      numOfPolice += events[i];
    }else{
      numOfCrime += 1;
      if(numOfPolice != 0){
        numOfCrime -= 1;
        numOfPolice -= 1;
      }
    }
  }

  cout << numOfCrime << endl;
}
