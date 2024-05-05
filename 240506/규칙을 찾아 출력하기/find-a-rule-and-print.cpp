#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(i == 1){
            for(int j = 1; j <= n; j++){
                cout << "* ";
            }
            cout << endl;
        }
        else{
            for(int j = 1; j <= i-1; j++){
                cout << "* ";
            }
            for(int j = 2*n-2*i; j >= 1; j--){
                cout << " ";
            }
            cout << "* ";
            cout << endl;
        }
    }
    return 0;
}