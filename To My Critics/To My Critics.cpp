#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b,c;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if(a+b>=10 || b+c>=10 || c+a>=10){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }


    return 0;
}
