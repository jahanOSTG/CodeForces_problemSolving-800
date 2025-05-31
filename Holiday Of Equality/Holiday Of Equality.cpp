#include<iostream>
using namespace std;
int main(){


    int n;
    int a[100];
    cin>>n;
    int max=0,sum=0;
    
    for(int i=1; i<=n; i++){
        cin>>a[i];
          if(a[i]>max){
        max=a[i];
    }
    sum=sum+a[i];
    }
    int result=0;

    for(int i=1; i<=n; i++){
        result=result+(max-a[i]);
    }
    cout<<result;

}

