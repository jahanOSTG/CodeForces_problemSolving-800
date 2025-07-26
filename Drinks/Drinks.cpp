#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    double sum=0;
    int num;
    for(int i=0;i<n;i++){
        cin>>num;;
        sum=sum+num;
    }

    double result=sum/n;
    cout.precision(12);

    cout<<fixed<<result<<endl;
    return 0;
}
