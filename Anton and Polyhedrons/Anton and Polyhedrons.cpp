#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string shape;
    int count=0;
    for(int i=0;i<n;i++){
        cin>>shape;
        if(shape=="Tetrahedron"){
            count=count+4;
        }else if(shape=="Cube"){
            count=count+6;
        }else if(shape=="Octahedron"){
            count=count+8;
        }else if(shape=="Dodecahedron"){
            count=count+12;
        }else{
            count=count+20;
        }
    }
    cout<<count<<endl;
}

