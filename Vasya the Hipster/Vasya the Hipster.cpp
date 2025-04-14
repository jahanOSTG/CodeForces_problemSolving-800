#include<iostream>
using namespace std;
int main(){
    int red,blue;
    int different,same;
    cin>>red>>blue;
        if(red<blue){
            different=red;
            same=(blue-red)/2;

        }else{
            different=blue;
            same=(red-blue)/2;

        }
        cout<<different<<" "<<same<<endl;
}
