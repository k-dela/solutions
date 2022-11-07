#include <iostream>
using namespace std;

int main() {
  int n,c;
  cin >> n >> c;

  int counter = 1;

  int t[n];
  for(int i = 0; i < n; i++){
    cin >> t[i];
  }
  
  for(int i = 1; i < n; i++){
    if(t[i] - t[i-1] <= c){
      counter += 1;
    }else{
      counter = 1;
    }
  }

  cout << counter << endl;
  return 0;
}
