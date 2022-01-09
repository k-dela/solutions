#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, A, B;
  cin >> N >> A >> B;

  string S;
  cin >> S;

  //Total num of students who have passed
  int numThatPassed = 0;

  //Num of oversea students who have passed
  int numOfOverseaPassed = 0;

  for(int i = 0; i < N; i++){
    if(S[i] == 'c'){
      cout << "No" << endl;
    }else if(S[i] == 'a'){
      if(numThatPassed < (A + B)){
        cout << "Yes" << endl;
        numThatPassed += 1;
      }else{
        cout << "No" << endl;
      }
    }else{
      if(numThatPassed < (A+B) && numOfOverseaPassed < B ){
        cout << "Yes" << endl;
        numOfOverseaPassed += 1;
        numThatPassed += 1;
      }else{
        cout << "No" << endl;
      }
    }
  }
}
