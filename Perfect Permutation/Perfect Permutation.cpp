
#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    if(x<=1 || x%2 !=0){
        cout<<"-1"<<endl;
    }else{
        for(int i=1;i<=x;i=i+2){
            cout<<i+1<<" "<<i<<" ";
        }

        cout << endl;
    }
}
