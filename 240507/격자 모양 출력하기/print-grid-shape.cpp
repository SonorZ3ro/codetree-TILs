#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = 0;
        }
    }

    for(int i = 1; i <= m; i++){
        int x, y;
        cin >> x >> y;
        arr[x-1][y-1] = x*y;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}