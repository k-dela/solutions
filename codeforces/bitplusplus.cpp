// http://codeforces.com/contest/282/problem/A
#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  string statement;
  int x = 0;
  for(int i = 0; i < n; i++){
    cin >> statement;
    if(statement == "X++" || statement == "++X"){
      x += 1;
    }else{
      x -= 1;
    }
  }

  cout << x << endl;
}
