#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int a,b,c,d;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        if(a==b && b==c && c==d){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

}
