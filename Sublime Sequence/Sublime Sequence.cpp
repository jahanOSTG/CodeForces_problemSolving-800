
#include<iostream>
using namespace std;
int main(){
    int t,n,x;
    cin>>t;
    while(t--){
        cin>>x>>n;
        if( n%2==0){
            cout<<0<<endl;
        }else{
            cout<<x<<endl;
        }
    }
    return 0;

}
