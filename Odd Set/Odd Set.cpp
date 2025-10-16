#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            int even=0;
        int odd=0;
        int n;
        cin>>n;
        int a[200];
        for(int i=0;i<2*n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                even++;
            }else{
                odd++;
            }


        }
          if(even==odd){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }


    }
}
