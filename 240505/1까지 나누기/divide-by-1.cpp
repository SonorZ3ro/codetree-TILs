#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int count = 0;
    int i = 1;
    while(n >= 1){
        count++;
        n /= i;
        i++;
    }
    cout << count;
    return 0;
}