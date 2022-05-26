#include <iostream>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  int A[N];
  int greatestTastiness = 0;
  for(int i = 0; i < N; i++){
    cin >> A[i];
    if(greatestTastiness == 0){
      greatestTastiness = A[i];
    }else if (A[i] > greatestTastiness){
      greatestTastiness = A[i];
    }
  }

  int B;
  for(int i = 0; i < K; i++){
    cin >> B;

    if(A[B-1] == greatestTastiness){
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}
