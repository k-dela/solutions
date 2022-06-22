#include <bits/stdc++.h>
using namespace std;

int main() {
  string p;
  cin >> p;

  for(auto &character : p){
    if(character == 'H' || character == 'Q' || character == '9'){
      cout << "YES" << endl;
      return 0;
    }
  }

  cout << "NO" << endl;
  return 0;
}
