#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i = n; i >= 1; i--){
        for(int j = i; j >= 1; j--){
            cout << "*";
        }
        for(int j = 1; j <= 2*n-2*i; j++){
            cout << " ";
        }
        for(int j = i; j >= 1; j--){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}