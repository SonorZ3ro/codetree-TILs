#include <iostream>
using namespace std;


int arr[21][21];
int GetMostMoney(int row, int col){
    int sum = 0;
    for(int i = row; i <= row+2; i++){
        for(int j = col; j <= col+2; j++){
            sum += arr[i][j];
        }
    }
    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int max_money = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    for(int row = 0; row < n-2; row++){
        for(int col = 0; col < n-2; col++){
            max_money = max(max_money, GetMostMoney(row, col));
        }
    }

    cout << max_money;

    return 0;
}