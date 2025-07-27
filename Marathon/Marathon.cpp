#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 1; i <= t; i++){
        int a[4];
        int count = 0;

        for(int j = 0; j < 4; j++){
            cin >> a[j];
        }

        if(a[1] > a[0]) count++;
        if(a[2] > a[0]) count++;
        if(a[3] > a[0]) count++;

        cout << count << endl;
    }

    

    return 0;
}
