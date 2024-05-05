#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;

    if(a < b){
        if(b < c) cout << b;
        else if(b > c){
            a > c ? cout << a : cout << c;
        }
    }
    else if(b < a){
        if(a < c) cout << a;
        else if(a > c){
            b > c ? cout << b : cout << c;
        }
    }
    return 0;
}