#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int c=0,d=0;
    int a,b;
    string g;
    map<int,int>e;
    cin>>a>>b;
    for(int i=0; i<a; i++)
    {
        cin>>g;
        e[g.size()]++;
    }
    cin>>g;
    int f=g.size();
    for(int i=1; i<f; i++)
        c+=e[i];
    for(int i=1; i<=f; i++)
        d+=e[i];
    cout<<c+1+(c/b)*5<<' '<<d+((d-1)/b)*5;
}
