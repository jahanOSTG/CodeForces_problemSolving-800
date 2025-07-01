#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;

    for (int i = 0; i < n; i++) {
        cin >> s;

        int counta = 0;
        int countb = 0;

        for (int j = 0; j < 5; j++) {
            if (s[j] == 'A') {
                counta++;
            } else if (s[j] == 'B') {
                countb++;
            }
        }

        if (counta > countb) {
            cout << "A" << endl;
        } else {
            cout << "B" << endl;
        }
    }

    return 0;
}
