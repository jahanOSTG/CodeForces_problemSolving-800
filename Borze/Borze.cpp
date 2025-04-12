#include<iostream>
using namespace std;
int main(){
    string borze_code;
    cin>> borze_code;
    for(int i=0; i<borze_code.length();){
        if(borze_code[i]=='.'){
            cout<<"0";
            i++;
        }
        else if(borze_code[i]=='-' && borze_code[i+1]=='.'){
            cout<<"1";
            i=i+2;
        }
         else if(borze_code[i]=='-' && borze_code[i+1]=='-'){
            cout<<"2";
            i=i+2;
        }

    }

}
