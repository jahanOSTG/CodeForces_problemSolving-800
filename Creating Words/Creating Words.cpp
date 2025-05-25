#include<iostream>
using namespace std;
int main(){
    string a;
    string b;
    int t;

    cin>>t;
    for(int i=0;i<t;i++){
        for(int i=0;i<3;i++){
            cin>>a>>b;
             swap(a[0],b[0]);
        cout<<a<<" "<<b<<endl;

        }


    }
}
