#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    int i = 1;
    if(a > 0){
        while(i <= b){
            cout << a;
            i++;
        }
    }
    else cout << 0;
    return 0;
}