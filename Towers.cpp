#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,l=0,p=0;
    scanf("%d",&n);
    vector<int>v;
    set<int>s;


    for(int i=0; i<n; i++)
    {
        scanf("%d",&a);
        v.push_back(a);
        s.insert(a);


    }
    for(int i=0; i<v.size(); i++)
    {
             l=count(v.begin(),v.end(),v[i]);


            p=max(l,p);

    }
    printf("%d %d\n",p,s.size());


}
