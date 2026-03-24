#include <iostream>

using namespace std;

int main(){
    int n;
    int t=0;
    int answer;
    cin >> n;
    answer = n;
    while(true){
        int a = n / 10;
        int b = n % 10;
        int c = a+b;
        int new_num = b*10 + c%10;
        t += 1;
        if (answer == new_num){
            cout << t << endl;
            return 0;
        }
        n = new_num;
    }
    
}