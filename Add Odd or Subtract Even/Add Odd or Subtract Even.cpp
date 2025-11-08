#include<iostream>
using namespace std;

int main(){
    int t,x,y;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x>>y;
        if(x==y){
            cout<<"0"<<endl;
        }else if(x<y){
            if(abs(x-y)%2==0){
                cout<<"2"<<endl;
            }else{
                 cout<<"1"<<endl;
            }
        }else{
            if((x-y)%2==0){
                cout<<"1"<<endl;
            }else{
                cout<<"2"<<endl;
            }
        }
    }
    return 0;
}


