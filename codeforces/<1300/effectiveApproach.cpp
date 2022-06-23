#include <bits/stdc++.h>
using namespace std;

int main() {
  map<long,long> vasyaTracker;
  map<long,long> petyaTracker;

  long long vasyaCounter = 0;
  long long petyaCounter = 0;
  
  long n;
  cin >> n;

  long num;
  for(long i = 0; i < n; i++){
    cin >> num;

    if(vasyaTracker.find(num) == vasyaTracker.end()){
      vasyaTracker[num] = i+1;
      petyaTracker[num] = i+1;
    }else{
      petyaTracker[num] = i+1;
    }
  }

  long m, b;
  cin >> m;
  for(long i = 0; i < m; i++){
    cin >> b;

    vasyaCounter += vasyaTracker[b];
    petyaCounter += (abs(n - petyaTracker[b]) + 1);
  }

  cout << vasyaCounter << " " << petyaCounter << endl;
  return 0;
}
