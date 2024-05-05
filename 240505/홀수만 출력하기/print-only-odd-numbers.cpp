#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int temp;

    for(int i = 1; i <= n; i++){
        cin >> temp;
        if((temp % 3 == 0) && (temp % 2 == 1)) cout << temp << endl;
    }
    return 0;
}