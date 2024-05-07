#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str1;
    string str2;
    string str3;

    cin >> str1;
    cin >> str2;
    cin >> str3;

    int max_len = max(str1.length(), max(str2.length(), str3.length()));
    int min_len = min(str1.length(), min(str2.length(), str3.length()));

    cout << max_len - min_len;

    return 0;
}