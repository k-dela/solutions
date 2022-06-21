#include <bits/stdc++.h>
using namespace std;

int main() {
  //3+2+1

  string s;
  cin >> s;

  if(s.size() == 1){
    cout << s[0] << endl;
    return 0;
  } 

  char temp = ' ';

  for(int i = 0; i < s.size() -2; i++){
    for(int j = 0; j < s.size() -2; j++){
      if(j % 2 == 0){
        if(s[j] > s[j+2]){
          temp = s[j+2];
          s[j+2] = s[j];
          s[j] = temp;
        }
      }
    }
  }

  cout << s << endl;
}
