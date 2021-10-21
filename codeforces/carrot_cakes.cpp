// https://codeforces.com/contest/799/problem/A
#include <iostream>
using namespace std;

int main() {
  int n, t, k, d;
  cin >> n>> t>> k>> d;

  if(k >= n){
    cout << "NO" << endl;
    return 0;
  }

  int differenceInOvens = abs(t - d);
  int timeWithOne;

  // If division is not exact, round up
  if(n % k > 0){
    timeWithOne = ((n / k) + 1) * t;
  }else{
    timeWithOne = (n / k) * t;
  } 

  //int timeWithTwo = timeWithOne - differenceInOvens;

  // Time for second oven to deliver first batch of cakes
  int tForFirstBake = d + t;

  //cout << timeWithOne << endl;
  //cout << tForFirstBake << endl;

  if(timeWithOne <= tForFirstBake){
    cout << "NO" << endl;
  }else{
    cout << "YES" << endl;
  }

}
