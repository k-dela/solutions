#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int coordinates[n][2];

	for (int i = 0; i < n; i++) {
		cin >> coordinates[i][0] >> coordinates[i][1];
	}

	int counter = 0;
	bool r = false;
	bool l = false;
	bool low = false;
	bool upp = false;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j != i) {
				if ((coordinates[j][0] > coordinates[i][0]) &&
					(coordinates[j][1] == coordinates[i][1])) {
					r = true;
					continue;
				}

				if ((coordinates[j][0] < coordinates[i][0]) &&
					(coordinates[j][1] == coordinates[i][1])) {
					l = true;
					continue;
				}

				if ((coordinates[j][1] > coordinates[i][1]) &&
					(coordinates[j][0] == coordinates[i][0])) {
					upp = true;
					continue;
				}

				if ((coordinates[j][1] < coordinates[i][1]) &&
					(coordinates[j][0] == coordinates[i][0])) {
					low = true;
					continue;
				}
			}
		}

    if(r && l && low && upp){
      counter += 1;
    }

    r = false;
    l = false;
    low = false;
    upp = false;
	}

  cout << counter << endl;
  return 0;
}
