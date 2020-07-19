#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,maxw;
    int weight[1000],val[1000],mat[100],a[100];
    int t,g;
    cin>>t;
    for(int k=0; k<t; k++)
    {
        for(int s=0;s<=30;s++) mat[s]=0;
        cin>>n;

        for(int i=0; i<n; i++)
        {



            cin>>val[i];
            cin>>weight[i];






                for(int j=30; j>=weight[i]; j--)
                {
                    mat[j]=max(mat[j],mat[j-weight[i]]+val[i]);

                }
        }



         cin>>g;
         int ans=0;
         for(int p=0;p<g;p++){
            cin>>a[p];
            ans+=mat[a[p]];
         }
         cout<<ans<<endl;

    }



}
