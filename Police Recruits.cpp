#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n;

    int officer = 0, crime = 0;

    while (n--) {
        cin >> x;
        if (x == -1) {
            if (officer > 0)
                officer--;
            else
                crime++;
        } else {
            officer += x;
        }
    }

    cout << crime << endl;
    return 0;
}
