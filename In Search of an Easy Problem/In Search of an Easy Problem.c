#include<iostream>
using namespace std;
int main(){
    int n;
    int a[100];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[n-1]==1){
            cout<<"HARD"<<endl;
        }
        else{
            cout<<"EASY"<<endl;
        }


    }
}
