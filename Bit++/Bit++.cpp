#include<iostream>


using namespace std;

int main() {
    int X = 0;
    int n;
    cin >> n;
    string s;

    for(int i = 0; i < n; i++) {
        cin >> s;
        if(s == "X++" || s == "++X") {
            X++;
        } else{
            X--;
        }
    }

    cout << X << endl;
    return 0;
}
