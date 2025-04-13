#include<iostream>
using namespace std;

int main(){
    int ticket[100];
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        for(int j = 0; j < 6; j++){
            cin >> ticket[j];
        }
        int sum1 = ticket[0] + ticket[1] + ticket[2];
        int sum2 = ticket[3] + ticket[4] + ticket[5];

        if(sum1 == sum2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
