#include<iostream>
using namespace std;
int main(){
int n;
int tram=0,minimum=0;
cin>>n;
for(int i=1;i<n;i++){
    int a,b;

        cin>>a>>b;
        tram=tram-a;
        tram=tram+b;
        if(tram>minimum){

            minimum=tram;
        }
}
cout<<minimum<<endl;
}
