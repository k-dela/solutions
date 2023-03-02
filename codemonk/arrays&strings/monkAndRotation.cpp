#include <iostream>
using namespace std;
int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int j = 0; j < n; j++) {
      cin >> arr[j];
    }

    if (k > n) {
      k = k % n;
    }

    for (int j = (n - k); j < n; j++) {
      cout << arr[j] << " ";
    }

    for (int j = 0; j < (n - k); j++) {
      cout << arr[j] << " ";
    }

    cout << endl;
  }

  return 0;
}
