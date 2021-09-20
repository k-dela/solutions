#include <iostream>
using namespace std;

int main() {
  int n = 0;
  int x = 0, y = 0, z = 0;
  int sumX = 0, sumY = 0, sumZ = 0;

  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> x >> y >> z;

    sumX += x;
    sumY += y;
    sumZ += z;
  }

  if(sumX == 0 && sumY == 0 && sumZ == 0){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }

}
