#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int min = 100;
    for(int i = 0; i < n-1; i++){
        if(min > arr[i+1]-arr[i]) min = arr[i+1]-arr[i];
    }
    cout << min;
    return 0;
}