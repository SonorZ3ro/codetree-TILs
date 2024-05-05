#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string phonenum;
    cin >> phonenum;
    string sub1 = phonenum.substr(4,4);
    string sub2 = phonenum.substr(9,4);

    cout << "010-" << sub2 << "-" << sub1;
    return 0;
}