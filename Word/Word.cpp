#include<iostream>
#include<cctype>
using namespace std;
int main(){
    string s;
    int low=0;
    int up=0;
    cin>>s;
    for(int i=0; i<s.length();i++){
            if(islower(s[i])){
                low++;
            }else{
                up++;
            }

    }
    if(up>low){
        for(int i=0; i<s.length();i++){
            s[i]=toupper(s[i]);
        }
    }else{
                for(int i=0; i<s.length();i++){
            s[i]=tolower(s[i]);

    }

 }
cout<<s<<endl;
}
