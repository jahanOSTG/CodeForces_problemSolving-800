
#include<iostream>
using namespace std;
int main(){
    int y;
    cin>>y;
    y++;

    while(true){
        int y1=(y/1000);
        int y2=(y/100)%10;
        int y3=(y/10)%10;
        int y4=y%10;

        if(y1 != y2 && y1 != y3 && y1 != y4 && y2 != y3 && y2 != y4 && y3 != y4 ){
            cout<<y<<endl;
            break;
        }
        y++;
    }

    return 0;
}
