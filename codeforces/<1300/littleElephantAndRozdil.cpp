#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  map <long long,long> tracker;
  pair<long long, int> min;
  long long current;

  for(int i = 0; i < n; i++){
    cin >> current;

    if(min.first == 0){
      min.first = current;
      min.second = i+1;
    }

    if(tracker.find(current) != tracker.end()){
      tracker[current] += 1;
    }else{
      tracker[current] = 1;
    }

    if(current < min.first){
      min.first = current;
      min.second = i+1;
    }
  }

  if(tracker[min.first] != 1){
    cout << "Still Rozdil" << endl;
  }else{
    cout << min.second << endl;
  }


  return 0;
}
