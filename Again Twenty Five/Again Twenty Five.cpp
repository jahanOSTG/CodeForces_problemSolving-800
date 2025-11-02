
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long count=1;
    if(n<=2){
    for(int i=1;i<=n;i++){
            count=count*5;

    }
    cout<<count;
    }
    return 0;
}

