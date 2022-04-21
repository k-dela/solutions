#include <iostream>
using namespace std;

int main() {
	int inputMatrix[3][3];
	cin >> inputMatrix[0][0] >> inputMatrix[0][1] >> inputMatrix[0][2];

	cin >> inputMatrix[1][0] >> inputMatrix[1][1] >> inputMatrix[1][2];

	cin >> inputMatrix[2][0] >> inputMatrix[2][1] >> inputMatrix[2][2];

	int resultMatrix[3][3] = {
		{1, 1, 1}, {1, 1, 1}, {1, 1, 1}}; // Initially all lights are on

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (inputMatrix[i][j] % 2 != 0) {
				resultMatrix[i][j] = (resultMatrix[i][j] == 1) ? 0 : 1;

        //Check adjacent sides from left to right (Clock direction)
        if((j-1) >= 0){
          resultMatrix[i][j-1] = (resultMatrix[i][j-1] == 1) ? 0 : 1;
        }

        if((i-1) >= 0){
          resultMatrix[i-1][j] = (resultMatrix[i-1][j] == 1) ? 0 : 1;
        }

        if((j+1) < 3){
          resultMatrix[i][j+1] = (resultMatrix[i][j+1] == 1) ? 0 : 1;
        }

        if((i+1) < 3){
          resultMatrix[i+1][j] = (resultMatrix[i+1][j] == 1) ? 0 : 1;
        }
			}
		}
	}


  //cout << "-----" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << resultMatrix[i][j];
		}
		cout << endl;
	}
}
