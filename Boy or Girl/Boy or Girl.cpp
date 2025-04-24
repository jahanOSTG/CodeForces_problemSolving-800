#include<iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int count = 0;

    for (int i = 0; i < s.length(); i++) {
        bool check = true;

        for (int j = 0; j < i; j++) {
            if (s[i] == s[j]) {
                check = false;
                break;
            }
        }

        if (check) {
            count++;
        }
    }

    if (count % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
