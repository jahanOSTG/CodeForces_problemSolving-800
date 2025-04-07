
#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
for(int i=0; i<t; i++){
        cin>>n;
    if(n%2==0){
        cout<<0;
    }
    else{
        cout<<((n-1)/2);
    }
    }
}
