#include <bits/stdc++.h>
using namespace std;
int main(){
    int p;
    cin>>p;
    string s;
    string t;
    while(p--){
        int q;
        cin>>q>>s>>t;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }


}
