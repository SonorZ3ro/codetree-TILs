#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    cout << fixed;
    cout.precision(2);
    int count = 0;
    int age = 0;
    int sum = 0;
    while(true){
        cin >> age;
        if(age < 20 || age >= 30) break;
        sum += age;
        count++;
    }
    float average = (float)sum / (float)count;

    cout << average;
    return 0;
}