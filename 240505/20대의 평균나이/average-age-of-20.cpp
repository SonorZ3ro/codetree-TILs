#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int sum = 0;
    int count = 0;
    int age;
    while(true){
        cin >> age;
        if(age >= 30) break;
        sum += age;
        count++;
    }
    double average = (double)sum / (double)count;

    cout << fixed;
    cout.precision(2);
    cout << average;
    return 0;
}