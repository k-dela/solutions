#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  string date;
  getline(cin, date);
  //cout << date << endl;

  if(date == "OCT 31" || date == "DEC 25"){
    cout << "yup" << endl;
  }else{
    cout << "nope" << endl;
  }
} 
