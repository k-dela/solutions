#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int counter = 0;

  for(int i = 0; i < 3; i++){
    counter = 1;
    
    for(int j = 0; j < 3; j++){
      if(i != j){
        if(s[i] == s[j]){
          counter += 1;
        }
      }
    }

    if(counter == 1){
      cout << s[i] << endl;
      return 0;
    }
  }


  cout << -1 << endl;
  return 0;
}
