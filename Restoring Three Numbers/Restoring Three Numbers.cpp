#include <iostream>
#include<algorithm>
using namespace std;

int main(){
    int x[4];
    int a,b,c;
    
    for(int i=0;i<4;i++){
        cin>>x[i];
    }
    sort(x,x+4);
    
    a=x[3]-x[1];
    b=x[3]-x[2];
    c=x[3]-x[0];
    
     cout << a << " " << b << " " << c << endl;

}
