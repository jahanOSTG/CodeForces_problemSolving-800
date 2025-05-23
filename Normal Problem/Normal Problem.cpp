#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int t;
  cin>>t;
  string s;
  for(int i=0;i<t;i++){
    cin>>s;
    reverse(s.begin(),s.end());
   for(int i=0;i<s.length();i++){
    if(s[i]=='p') cout<<'q';
    else if(s[i]=='q') cout<<'p';
    else if(s[i]=='w') cout<<'w';
   }
       cout << endl;

  }

}
