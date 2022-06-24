#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int a;
	vector<pair<int, int>> tracker;

	for (int i = 1; i <= n; i++) {
		cin >> a;
		if (a > m) {
			tracker.push_back(make_pair(i, a - m));
		}
	}

  if(tracker.empty() == true){
    cout << n << endl;
    return 0;
  }

	// for (int i = 0; i < tracker.size(); i++) {
	// 	cout << tracker[i].first << " " << tracker[i].second << endl;
	// }

  pair<int,int> tempPair;
	while(tracker.size() > 1){
	  if(tracker[0].second <= m){
	    tracker.erase(tracker.begin());
	  }else{
      tracker[0].second -= m;
      tempPair = tracker[0];
      tracker.erase(tracker.begin());
      tracker.push_back(tempPair);
    }
	}

  cout << tracker[0].first << endl;
  return 0;
}
