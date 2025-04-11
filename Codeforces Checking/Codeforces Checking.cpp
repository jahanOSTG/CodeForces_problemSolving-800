#include<iostream>
using namespace std;

int main(){
    string s = "codeforces";
    int t;
    char a;
    bool found;

    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> a;



        for(int i = 0; i < 10; i++){
            if(s[i] == a){
                found = true;
            }
        }

        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
