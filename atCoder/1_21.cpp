#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
  string a,b;
  cin>> a >> b;
  //cout << a + b << endl;
  int num = stoi(a+b);
  //cout << num << endl;

  int multiplication;
  for(int i = 1; i <= 1000;i++){
    multiplication = i * i;
    if(multiplication == num){
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}
