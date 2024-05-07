#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string arr[5] = {"apple", "banana", "grape", "blueberry", "orange"};

    char find;
    int cnt = 0;
    cin >> find;

    for(int i = 0; i < 5; i++){
        if(arr[i][2] == find || arr[i][3] == find){
            cout << arr[i] << endl;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}