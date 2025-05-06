#include<iostream>
using namespace std;
int main(){
    int t,a;


    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a;

        if(a%6==1 || a%6==4){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
}
