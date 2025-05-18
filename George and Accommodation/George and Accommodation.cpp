#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n;

    int count = 0;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;

        c = b - a;
        if (c >= 2) {
            count++;
        }
    }

    cout << count << endl;

}
