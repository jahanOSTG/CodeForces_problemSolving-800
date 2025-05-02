#include<iostream>

using namespace std;
int main() {
    int t,s;
    int a[1000];
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin>>s;
         int mi=0;
         int bi=0;
            for(int j=0;j<s;j++){
                    cin>>a[j];
                    if(a[j]%2==0){
                        mi=mi+a[j];
                    }else{
                        bi=bi+a[j];
                    }

            }
              if(mi>bi){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    }

}
