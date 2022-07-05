#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	long oficialSum = 0;
	long otherSum = 0;

	int num;

	for (int i = 1; i <= n; i++) {
		oficialSum += i;

		if (i != n) {
			cin >> num;
			otherSum += num;
		}
	}

  cout << oficialSum - otherSum << endl;
  return 0;
}
