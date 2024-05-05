#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    int result = 1;
    cin >> a >> b;

    for(int i = a; i <= b; i+=a){
        result *= i;
    }
    cout << result;
    return 0;
}