#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    vector<int>v;
    while(n--)
    {
        cin>>a;
        v.push_back(a);
    }
    if(v[0]>15)
    {
        cout<<15<<endl;
        return 0;
    }
    for(int i=0; i<v.size(); i++)
    {
        if(v[i+1]-v[i]>15)
        {
            cout<<v[i]+15<<endl;
            return 0;
        }

    }
    cout<<90<<endl;



}
