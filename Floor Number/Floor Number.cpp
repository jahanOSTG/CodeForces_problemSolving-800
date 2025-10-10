#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t,x,n;
    cin>>t;
    while(t--){
        int count;
        cin>>n>>x;
        if(n<=2){
            cout<<"1"<<endl;

        }else{
           double a=n-2;
            count=ceil(a/x);
           cout<<count+1<<endl;
        }
    }
}
