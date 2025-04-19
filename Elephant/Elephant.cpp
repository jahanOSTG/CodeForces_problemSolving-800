#include<iostream>
using namespace std;
int main(){
    int x;
    int step;
    cin>>x;
    if(x%5==0){
        step=x/5;
    }else{
        step=(x/5)+1;
    }
    cout<<step<<endl;
}
