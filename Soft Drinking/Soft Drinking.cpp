#include <iostream>
using namespace std;

int main() {
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink=k*l;
    int toast=drink/nl;
    int lime=c*d;
    int salt=p/np;
    int minfood=min(toast,min(lime,salt));
    int food=minfood/n;
    cout<<food<<endl;
}
