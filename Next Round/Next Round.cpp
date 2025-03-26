#include<iostream>
using namespace std;
int main(){
int n,k;

int count=0;
cin>>n >>k;
int a[50];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    if(a[i]>=a[k-1] && a[i]>0)
            count++;
}

cout<<count<<endl;
}









