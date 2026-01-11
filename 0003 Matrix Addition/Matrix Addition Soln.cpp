#include <iostream>
using namespace std;
int main() {
  int r,c ;
  cin >> r >> c;
  int arr1[r][c] ;
  int arr2[r][c] ;
  int result[r][c];

  for (int i = 0 ; i < r ; i++){
    for (int j = 0; j < c ; j++){
      cin >> arr1[i][j];
    }
  }
  for (int i = 0 ; i < r ; i++){
    for (int j = 0; j < c ; j++){
      cin >> arr2[i][j];
    }
  }
  for (int i = 0 ; i < r ; i++){
    for (int j = 0; j < c ; j++){
      result[i][j] = arr1[i][j] + arr2[i][j];
    }
  }
  
  for (int i = 0 ; i < r ; i++){
    for (int j = 0; j < c ; j++){
      cout << result[i][j] << " ";
    }
    cout << endl;
  }
}
