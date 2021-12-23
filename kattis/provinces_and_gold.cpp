#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
  int g,s,c;
  cin >> g >> s >> c;
  
  int total = (g * 3) + (s * 2) + c;

  string victoryCard ="";
  string treasureCard = "Copper";

  if(total >= 3 && total < 6){
    treasureCard = "Silver";
  }else if(total >= 6){
    treasureCard = "Gold";
  }

  if(total >= 2 && total < 5){
    victoryCard = "Estate";
  }else if(total >= 5 && total < 8){
    victoryCard = "Duchy";
  }else if(total >= 8){
    victoryCard = "Province";
  }

  if(victoryCard == ""){
    cout << treasureCard << endl;
  }else{
    cout << victoryCard << " or " << treasureCard << endl;
  }
}

