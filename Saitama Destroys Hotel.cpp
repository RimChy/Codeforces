#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,f,t;
    cin>>n>>s;
    int maximum=s;
    for(int i=0;i<n;i++){
        cin>>f>>t;
        maximum=max(maximum,f+t);
    }
    cout<<maximum<<endl;



}
