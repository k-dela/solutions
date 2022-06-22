#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,k,l,c,d,p,nl, np;
  cin >> n;
  cin >> k;
  cin >> l;
  cin >> c;
  cin >> d;
  cin >> p;
  cin >> nl;
  cin >> np;

  int maxToastMl = (k * l) / nl;
  int totalLimeSlices = c * d;
  int saltForOneT = p / np;

  int min = 0;

  if(maxToastMl < totalLimeSlices && maxToastMl < saltForOneT){
    min = maxToastMl;
  }else if(totalLimeSlices < maxToastMl && totalLimeSlices < saltForOneT){
    min = totalLimeSlices;
  }else{
    min = saltForOneT;
  }

  cout << (min / n) << endl;
  return 0;
}
