#include <iostream>

using namespace std;

int main() {

    int x;
    int n;
    int a,b;
    int total = 0;
    cin >> x >> n ;
    for (int i=0; i<n; i++){
        cin >> a >> b;
        total += a*b;
    }
    if (x == total){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}