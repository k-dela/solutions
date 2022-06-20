#include <bits/stdc++.h>
using namespace std;


int main() {
  string a;
  string b;
  cin >> a;
  cin >> b;

  string result = "";

  for(int i = 0; i < a.size(); i++){
    if(a[i] == b[i]){
      result += '0';
    }else{
      result += '1';
    }
  }

  cout << result << endl;
  return 0;
}
