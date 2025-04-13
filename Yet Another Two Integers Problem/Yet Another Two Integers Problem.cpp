#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int a, b, t;
    int different;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        different = abs(a - b);
        if (different == 0) {
            cout << "0" << endl;
        } else {
            int moves = (different + 9) / 10;
            cout << moves << endl;
        }
    }

}
