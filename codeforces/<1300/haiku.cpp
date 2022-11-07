#include <iostream>
using namespace std;

int main() {
  string lineOne, lineTwo, lineThree;
  getline(cin, lineOne);
  getline(cin, lineTwo);
  getline(cin, lineThree);

  int counter = 0;

  for(int i = 0; i < lineOne.size(); i++){
     if( lineOne[i] == 'a' || lineOne[i] == 'e' || lineOne[i] == 'i' || lineOne[i] == 'o' || lineOne[i] == 'u'){
       counter += 1;
     }
  }

  if(counter != 5){
    cout << "NO" << endl;
    return 0;
  }

  for(int i = 0; i < lineTwo.size(); i++){
     if( lineTwo[i] == 'a' || lineTwo[i] == 'e' || lineTwo[i] == 'i' || lineTwo[i] == 'o' || lineTwo[i] == 'u'){
       counter += 1;
     }
  }

  if(counter != 12){
    cout << "NO" << endl;
    return 0;
  }


  for(int i = 0; i < lineThree.size(); i++){
     if( lineThree[i] == 'a' || lineThree[i] == 'e' || lineThree[i] == 'i' || lineThree[i] == 'o' || lineThree[i] == 'u'){
       counter += 1;
     }
  }


  if(counter != 17){
    cout << "NO" << endl;
    return 0;
  }


  cout << "YES" << endl;
  return 0;
}
