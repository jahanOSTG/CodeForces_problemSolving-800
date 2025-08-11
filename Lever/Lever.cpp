#include<iostream>
using namespace std;
int main(){
    int t,len;
    cin>>t;
    while(t--){
        cin>>len;
        int a[len];
        int b[len];
        for(int i=0;i<len;i++){
            cin>>a[i];
        }
         for(int i=0;i<len;i++){
            cin>>b[i];
        }

        int count=0;
        while(true){
            count++;
            bool ok_step=false;

            for(int i=0;i<len;i++){
                if(a[i]>b[i]){
                    a[i]=a[i]-1;
                    ok_step=true;
                    break;
                }
            }

            for(int i=0;i<len;i++){
                if(a[i]<b[i]){
                    a[i]=a[i]+1;

                    break;
                }
            }

            if(!ok_step){
                break;
            }


        }
        cout<<count<<endl;
    }

}
