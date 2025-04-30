#include<iostream>
using namespace std;
int main(){
    int t,p;
    int a[2000];
    int odd=0;
    int even=0;
    cin>>t;
    for(int i=0;i<t;i++){
            cin>>p;
        for(int j=0;j<p;j++){
            cin>>a[i];

        if(a[j]%2==0){
           even++;
        }else{
            odd++;
        }


    }
     if ((odd > 0 && even > 0) || (odd % 2 == 1)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
}
