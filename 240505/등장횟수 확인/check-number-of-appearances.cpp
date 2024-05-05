#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int temp;
    int count = 0;
    for (int i = 1; i <= 5; i++){
        cin >> temp;
        if(temp % 2 == 0) count++;
    }
    cout << count;
    return 0;
}