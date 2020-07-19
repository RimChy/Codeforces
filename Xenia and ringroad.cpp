#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,l,sum=0;
    cin>>n>>m;

    vector<int>v(m);
    for(int i=0; i<m; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sum=v[0]-1;

    for(int i=0; i<v.size()-1; i++)
    {
        if(v[i] > v[i+1])
        {
            sum+=n+v[i+1]-v[i];


        }
        else{
            sum+=v[i+1]-v[i];
        }
    }



    cout<<sum<<endl;
}
