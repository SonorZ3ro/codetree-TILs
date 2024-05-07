#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int cnt = 0;
    string str;
    char find;
    getline(cin, str);
    cin >> find;

    for(int i = 0; i < str.length(); i++){
        if(str[i] == find) cnt++;
    }
    cout << cnt;
    return 0;
}