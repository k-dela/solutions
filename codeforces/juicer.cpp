// https://codeforces.com/contest/709/problem/A
#include <iostream>
using namespace std;

int main() {
  int n,b,d;
  cin >> n >> b >>d;

  int wasteSection = 0;
  int numOfTimes = 0;
  int juicedAmount = 0;
  int sizeOfOrange;
  
  for(int i = 0; i < n; i++){
    cin >> sizeOfOrange;
    if(sizeOfOrange <= b){
      juicedAmount += sizeOfOrange;
      if(juicedAmount > d){
        juicedAmount = 0;
        numOfTimes += 1;
      }
    }
  }


  cout << numOfTimes << endl;
}
