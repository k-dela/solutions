#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,L;
  cin >> N >> L;

  string result = "";
  

  string currStr;
  string tempStr;
  for(int i = 0; i < N; i++){
    cin >> currStr;
    
    if(result == ""){
      result += currStr;
      continue;
    }

    for(int j = 0; j < result.size(); j+=L){
      tempStr = result.substr(j,L);

      if(currStr < tempStr){
        result.insert(j,currStr);
        break;
      }
    }

    if(result.size() == i*L){
      result += currStr;
    }

    
  }


  cout << result << endl;
  return 0;
}
