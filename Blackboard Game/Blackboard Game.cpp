#include <iostream>
using namespace std;

int main() {
    int n,a;
    cin >> n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a%4==0)
            cout<<"Bob"<<endl;
        else
            cout<<"Alice"<<endl;
    }




    return 0;
}
