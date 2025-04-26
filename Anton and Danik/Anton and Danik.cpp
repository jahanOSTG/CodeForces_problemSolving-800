#include<iostream>
using namespace std;
int main(){
    string s;
    int n;
    int count1=0;
    int count2=0;
    cin>>n>>s;
    for(int i=0; i<n; i++){
            if(s[i]=='A'){
                count1++;
            }else if(s[i]=='D'){
                count2++;
            }
    }
    if(count1>count2){
        cout<<"Anton"<<endl;
    }else if(count1==count2){
        cout<<"Friendship"<<endl;
    }else{
        cout<<"Danik"<<endl;
    }
}
