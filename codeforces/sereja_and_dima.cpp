// https://codeforces.com/contest/381/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int card;
  vector <int> cards;

  for(int i = 0; i < n; i++){
    cin >> card;
    cards.push_back(card);
  }

  int serejaScore = 0;
  int dimaScore = 0;

  int greaterNum;
  int turnTracker = 1;

  int rPointer = cards.size() - 1;
  int lPointer = 0;

  //cout << rPointer << endl;

  while(lPointer <= rPointer){
    if(cards[lPointer] > cards[rPointer]){
      if(turnTracker % 2 > 0){
        serejaScore += cards[lPointer];
      }else{
        dimaScore += cards[lPointer];
      }

      lPointer += 1;
    }else{
      //cout << "that code executed" << endl;
      if(turnTracker % 2 > 0){
        serejaScore += cards[rPointer];
      }else{
        dimaScore += cards[rPointer];
      }

      rPointer -= 1;
    }

    turnTracker += 1;
  }

  cout << serejaScore << " "<< dimaScore << endl;
}
