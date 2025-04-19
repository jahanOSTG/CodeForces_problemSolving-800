#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    string s;

    for(int i = 0; i < t; i++){
        cin >> s;
        int count = 0;

        for(int j = 0; j < s.length() - 1; j++){
            if(s[j] == s[j + 1]){
                count++;
            }
        }

        cout << count << endl;
    }
}
