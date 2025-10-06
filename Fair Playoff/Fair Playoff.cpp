
#include<iostream>

using namespace std;
int main(){
    int t,s1,s2,s3,s4;
    cin>>t;
    while(t--){
        cin>>s1>>s2>>s3>>s4;
        int a,b,c,d;
        a=max(s1,s2);
        b=max(s3,s4);
        c=min(s1,s2);
        d=min(s3,s4);
        if(b<c || a<d){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }

    }
}
