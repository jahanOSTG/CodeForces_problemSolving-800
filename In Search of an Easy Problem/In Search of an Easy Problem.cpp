#include<iostream>
using namespace std;

int main(){
    int n;
    int a[100];
    cin>>n;
    bool check=false;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[n-1]==1){
                check=true;

      }
    }
      if(check){
        cout<<"HARD"<<endl;
      }
      else{
        cout<<"EASY"<<endl;
      }
 }

