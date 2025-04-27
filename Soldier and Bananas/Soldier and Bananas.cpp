#include<iostream>
using namespace std;
int main(){
    int k,w,n,sum=0,z;
    int tk;
    cin>>k>>n>>w;
    for(int i=1; i<=w; i++){
        z=i*k;
        sum=sum+z;

        }
        if(sum<n){
            cout<<"0"<<endl;
        }else if(sum>=n){
            cout<<sum-n<<endl;

        }

}
