#include <iostream>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;
    int C;

    if (M <= 16 && N <= 16) {
        C = (M * N) / 2;
    }

    cout << C << endl;
}
