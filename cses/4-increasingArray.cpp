// https://cses.fi/problemset/task/1094

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> numbers;
  int num;

  for(int i = 0; i < n; i++){
    cin >> num;
    numbers.push_back(num);
  }

  long counterOfMoves = 0;
  long difference = 0;

  for(int i = 0; i < n-1; i++){
    if(numbers[i+1] < numbers[i]){
      difference = numbers[i] - numbers[i+1];
      numbers[i+1] = numbers[i+1] + difference;
      counterOfMoves += difference;
    }
  }

  cout << counterOfMoves << endl;
}
