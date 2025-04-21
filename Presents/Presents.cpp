#include<iostream>
using namespace std;
int main(){
    int a[100];
    int result[100];
    int t;
    cin>>t;
    for(int i=1; i<=t;i++){
        cin>>a[i];
        result[a[i]]=i;
    }
    for(int i=1; i<=t;i++){
        cout<<result[i]<<" ";
    }
}
