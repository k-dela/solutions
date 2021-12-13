#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, t;
  cin >> n >> t;

  string queue;
  cin >> queue;

 for(int i = 0; i < t; i++){
    for(int j = 0; j < n-1; j++){
    if(queue[j] == 'B' && queue[j+1] == 'G'){
      queue[j] = 'G';
      queue[j+1] = 'B';

      j += 1;
    }
  }
 }
  cout << queue << endl;
} 
