#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    for(int i = 1; i <= 5; i++){
        int temp;
        cin >> temp;
        if(temp % 3 != 0){
            cout << 0;
            return 0;
        }
    }
    cout << 1;
    return 0;
}