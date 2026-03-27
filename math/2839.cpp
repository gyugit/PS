// 수학
// 다이나믹 프로그래밍
// 그리디 알고리즘
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    // 3kg 5kg
    int k = (n / 5);
    int answer = -1;

    while (k>-1){
        int m = n - (k*5);
        if (m % 3 == 0){
            answer = k+(m/3);
            break;
        }
        k-=1;
    }
    cout << answer << endl;
    return 0;
}