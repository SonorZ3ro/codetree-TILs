#include <iostream>
#include <vector>
using namespace std;

int arr[101];
int n;

void pop(int s, int e){
    vector<int> vec;

    s -= 1;
    e -= 1;

    for(int i = 0; i < n; i++){
        if((i >= s) && (i <= e)) continue;
        vec.push_back(arr[i]);
    }
    n = vec.size();
    for(int i = 0; i < n; i++){
        arr[i] = vec[i];
    }
}

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int s, e;
    cin >> s >> e;
    pop(s, e);
    cin >> s >> e;
    pop(s, e);

    cout << n << '\n';
    for(int i = 0; i < n; i++){
        cout << arr[i] << '\n';
    }

    return 0;
}