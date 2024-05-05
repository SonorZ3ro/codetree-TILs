#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    cout << fixed;
    int weight = 13;
    double rate = 0.165000;
    cout.precision(6);

    cout << weight << " * " << rate << " = " << weight*rate;
    return 0;
}