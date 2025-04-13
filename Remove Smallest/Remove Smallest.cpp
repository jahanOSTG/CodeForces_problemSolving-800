#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t,a[100],n;
    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];

        }
           sort(a,a+n);


    bool check=true;
    for(int i=1; i<n; i++){
        if(a[i]-a[i-1]>1){
            check=false;
            break;

        }
    }
    if(check){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;

    }
  }
}
