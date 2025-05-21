
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int maximum=max(a,max(b,c));
    int minimum=min(a,min(b,c));
    int middle=((a+b+c)-maximum)-minimum;
    int distance=(maximum-middle)+(middle-minimum);
    cout<<distance<<endl;




    }

