#include<iostream>
using namespace std;
int main(){
    int n,h,w;
    cin>>n>>h;


    int count=0;
    for(int i=1;i<=n ;i++){
            cin>>w;
            if(w<=h){
                count=count+1;
            }
            else{
                count=count+2;
            }

    }
    cout<<count;

}
