#include<iostream>
using namespace std;
int main(){
    int t,n,x;

    cin>>t;
    for(int i=0; i<t; i++){
        int choco1g=0;
        int choco2g=0;
        cin>>n;
        for(int i=0; i<n; i++){
              cin>>x;
              if(x==1){
                choco1g++;
              }
              else{
                choco2g++;
              }


        }
        int chocoSum = choco1g*1 + choco2g*2;
        if(chocoSum%2 != 0){
            cout<<"NO";
        }else{
            int half=chocoSum / 2;
            if(half%2!=0 && choco1g==0){
                cout<<"NO";
            }
            else{
                cout<<"YES";
            }
        }


    }
}
