#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string previous,current;
    int group=0;
    for(int i=0;i<n;i++){
        cin>>current;
        if(i==0 || current != previous){
            group++;
        }
        previous=current;

    }
    cout<<group<<endl;
}
