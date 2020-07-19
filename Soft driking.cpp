#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int m=k*l,o=c*d,x=p/np,y=m/nl;

    cout<<(min(o,min(x,y)))/n<<endl;
}
