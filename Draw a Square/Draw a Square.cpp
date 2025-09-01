#include<iostream>
using namespace std;
int main(){
    int l,r,d,u;
    int t;
    cin>>t;
    while(t--){
        cin>>l>>r>>d>>u;
        if(l==r && r==d && d==u){
           cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;

        }

    }
    return 0;
}
