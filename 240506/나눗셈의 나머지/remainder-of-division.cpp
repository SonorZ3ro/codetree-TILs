#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    int rest[b] = {0};
    int i = 0;

    while(a > 1){
        rest[a%b]++;
        a /= b;
        i++;
    }
    int sum = 0;
    for(int i = 0; i < b; i++){
        sum += rest[i]*rest[i];
    }
    cout << sum;
    return 0;
}