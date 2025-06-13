#include<iostream>
using namespace std;
int main(){
    int t,a,b;
    int x,y;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        if(a<b){
            cout<<b-a<<endl;
        }else if(a>=b){
            if(a%b==0){
                    cout<<0<<endl;

            }else{
                cout<<(b-(a%b))<<endl;
            }
        }

    }


}
