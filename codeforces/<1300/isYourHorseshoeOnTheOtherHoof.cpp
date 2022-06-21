#include <bits/stdc++.h>
using namespace std;

int main() {
  int shoe;
  set<int> colors;

  cin >> shoe;
  colors.insert(shoe);

  cin >> shoe;
  colors.insert(shoe);

  cin >> shoe;
  colors.insert(shoe);

  cin >> shoe;
  colors.insert(shoe);

  cout << 4 - colors.size() << endl;
  return 0;
}
