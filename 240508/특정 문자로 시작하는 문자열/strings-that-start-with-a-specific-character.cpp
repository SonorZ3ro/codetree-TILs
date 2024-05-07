#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string arr[n];
    char c;
    int cnt = 0;
    float length_average = 0.00;
    int length = 0;
    cout << fixed;
    cout.precision(2);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> c;

    for(int i = 0; i < n; i++){
        if(arr[i][0] == c){
            cnt++;
            length += arr[i].length();
        }
    }

    length_average = (float)length / (float)cnt;
    cout << cnt << " " << length_average;
    return 0;
}