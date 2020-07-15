#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,i,x,y,sum=0,a=0,flag=1;
    cin>>s>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    int cnt=0;
    for(i=0; i<n; i++)
    {
        if(s>v[i].first)
        {
            s+=v[i].second;
        }
        else{
            flag=0;
            break;
        }

    }
    if(flag==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }



}




