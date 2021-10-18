// https://codeforces.com/contest/731/problem/Af0a28=1
#include <bits/stdc++.h>
using namespace std;

int main() {
  string name;
  cin >> name;

  map <char, int> alphabet = { {'a', 1} , {'b', 2}, {'c', 3}, {'d', 4}, {'e', 5}, {'f', 6}, {'g', 7}, {'h', 8}, {'i', 9}, {'j', 10}, {'k', 11}, {'l', 12}, {'m', 13}, {'n', 14}, {'o', 15}, {'p', 16}, {'q', 17}, {'r', 18}, {'s', 19}, {'t', 20}, {'u', 21}, {'v', 22}, {'w', 23}, {'x', 24}, {'y', 25}, {'z', 26} };

  char letterPointer = 'a';
  int counterOfMoves = 0;
  int positionOfCurrentLetter;
  int numOfMovesClockwise;
  int numOfMovesCounterClockwise;


  for(int i = 0; i < name.size(); i++){
    positionOfCurrentLetter = alphabet[name[i]];

    if(letterPointer == name[i]){
      //cout << "Equal exectuted" << endl;
      numOfMovesClockwise = 0;
      numOfMovesCounterClockwise = 0;
    } else if(alphabet[letterPointer] > positionOfCurrentLetter){
      //cout << "This code was executed" << endl;
      numOfMovesClockwise = (26 - alphabet[letterPointer]) + positionOfCurrentLetter;
      numOfMovesCounterClockwise = abs(alphabet[letterPointer] - positionOfCurrentLetter);
    }else{
     //cout << "Else was executed " << endl;
     numOfMovesClockwise = positionOfCurrentLetter - alphabet[letterPointer];
     numOfMovesCounterClockwise = (26 - positionOfCurrentLetter) + alphabet[letterPointer];
    }


    //cout << "Num the iteration: " << i << endl;
    //cout << "Current letter " << name[i] << endl;
    //cout << "Position of current Letter: " << positionOfCurrentLetter << endl;
    //cout << "Letter pointer " << letterPointer << endl;
    //cout << "Positon of letter pointer: " << alphabet[letterPointer] << endl;
    //cout << "Clock wise " << numOfMovesClockwise << endl;
    //cout << "Counter Clock wise " << numOfMovesCounterClockwise << endl;

    if(numOfMovesClockwise == numOfMovesCounterClockwise){
      counterOfMoves += numOfMovesClockwise;
    }else if(numOfMovesClockwise < numOfMovesCounterClockwise){
      counterOfMoves += numOfMovesClockwise;
    }else if (numOfMovesCounterClockwise < numOfMovesClockwise){
      counterOfMoves += numOfMovesCounterClockwise;
    }
    letterPointer = name[i];

   //cout << "Counter of moves " << counterOfMoves << endl;
   //cout << "Letter Pointer " << letterPointer << endl;
   //cout << " " << endl;
  }

  //cout << "Counter of moves" << counterOfMoves << endl;
  //cout << "Letter Pointer"<<letterPointer << endl;


  cout << counterOfMoves << endl;

}

// abcdefghijklmnopqrstuvwxyz - 26 letters
// abcdefghijklm - 1-13
// nopqrstuvwxyz - 14-26
