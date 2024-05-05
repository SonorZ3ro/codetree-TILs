#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    char cnt = 'A';
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i-1; j++){
            cout << "  ";
        }
        for(int j = n-i+1; j >= 1; j--){
            cout << cnt << " ";
            cnt++;
            if(cnt > 'Z') cnt = 'A';
        }
        cout << endl;
    }
    return 0;
}