#include <iostream>
using namespace std;

int arr[101][101];

//행복한 수열 개수
int Happy(int n, int m){
    int sum = 0;
    //행 행복한 개수
    for(int i = 0; i < n; i++){
        int count = 1;
        for(int j = 0; j < n-1; j++){
            if(arr[i][j] == arr[i][j+1]) count++;
            else count = 1;
            if(count >= m) {
                sum++;
                break;
            }
        }
    }

    //열 행복한 개수
    for(int j = 0; j < n; j++){
        int count = 1;
        for(int i = 0; i < n-1; i++){
            if(arr[i][j] == arr[i+1][j]) count++;
            else count = 1;
            if(count >= m) {
                sum++;
                break;
            }
        }
    }

    return sum;
}
int main(){
    //m, n 입력
    int n, m;
    cin >> n >> m;

    //배열 입력
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    int result = Happy(n, m);
    cout << result;
    return 0;
}