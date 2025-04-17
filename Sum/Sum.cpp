#include<iostream>
using namespace std;
int main(){
    int t;
    int a,b,c;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>a>>b>>c;
        if(a+b==c){
            cout<<"YES"<<endl;
        }
        else if(a+c==b){
            cout<<"YES"<<endl;

        }
        else if(b+c==a){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
