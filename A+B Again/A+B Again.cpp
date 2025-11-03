#include<iostream>
using namespace std;
int main(){
    int n, t;
    int sum;
    cin >> t;
    
    for(int i = 1; i <= t; i++){
        cin >> n;
        int a = n / 10;
        int b = n % 10;
        sum = a + b;
        cout << sum << endl;
    }
}


