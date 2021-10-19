// https://codeforces.com/contest/268/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
  int numOfTeams;
  cin >> numOfTeams;

  int homeUniforms[numOfTeams];
  int awayUniforms[numOfTeams];

  int counter = 0;

  for(int i = 0; i < numOfTeams; i++){
    cin >> homeUniforms[i] >> awayUniforms[i];
  }


  for(int i = 0; i < numOfTeams; i++){
    for(int j = 0; j < numOfTeams; j++){
      if(homeUniforms[i] == awayUniforms[j]){
        counter += 1;
      }
    }
  }
  
  cout << counter << endl;
}
