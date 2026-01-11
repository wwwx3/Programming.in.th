#include <iostream>

using namespace std;

int main(){
    int arr[9];
    int a;
    int sum = 0;
    for (int i = 0; i < 9; i++){
        cin >> a;
        arr[i] = a;
        sum += arr[i];
    }

    int n, m;

    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            if (sum - (arr[i] + arr[j]) == 100){
                n = i;
                m = j;
            }
        }
    }

    for (int i = 0; i < 9; i++){
        if (arr[i] != arr[n] && arr[i] != arr[m]){
            cout << arr[i] << endl;
        }
    }


    return 0;
}
