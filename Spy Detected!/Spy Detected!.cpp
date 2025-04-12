#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    for(int i = 1; i <= t; i++) {
        cin >> n;
        int arr[n];

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int same;
        if(arr[0] == arr[1]) {
            same = arr[0];
        }
        else if(arr[0] == arr[2]) {
            same = arr[0];
        }
        else {
            cout << 1 << endl;
            continue;
        }


        for(int i = 1; i <= n; i++) {
            if(same != arr[i]) {
                cout << i + 1 << endl;
                break;
            }
        }
    }

}
