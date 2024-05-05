#include <iostream>
using namespace std;

int main(){
    int n, t;
    cin >> n >> t;

    //input array
    int arr1[n];
    int arr2[n];
    int arr3[n];
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    for(int i = 0; i < n; i++){
        cin >> arr2[i];
    }
    for(int i = 0; i < n; i++){
        cin >> arr3[i];
    }

    for(int cnt = 1; cnt <= t; cnt++){
        int temp1 = arr1[n-1];
        int temp2 = arr2[n-1];
        int temp3 = arr3[n-1];
        for(int i = n-2; i >= 0; i--){
            arr1[i+1] = arr1[i];
        }
        for(int i = n-2; i >= 0; i--){
            arr2[i+1] = arr2[i];
        }
        for(int i = n-2; i >= 0; i--){
            arr3[i+1] = arr3[i];
        }
        arr2[0] = temp1;
        arr3[0] = temp2;
        arr1[0] = temp3;
    }

    for(int i = 0; i < n; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << arr3[i] << " ";
    }
    return 0;
}