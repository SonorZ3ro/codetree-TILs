#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string arr[n];
    int length = 0;
    int cnt = 0;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        length += arr[i].length();
        if(arr[i][0] == 'a') cnt++;
    }
    cout << length << " " << cnt;
    return 0;
}