#include<iostream>
using namespace std;
int main(){
    int a,b,c,t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        if((a>b && a<c) || (a<b && a>c)){
            cout<<a<<endl;
        }
        else if((b>a && b<c) || (b<a && b>c)){
            cout<<b<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }

}
