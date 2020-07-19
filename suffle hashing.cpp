#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long  int t,c=0;
    cin>>t;
    string s1,s2,s,p,s3;
    vector<char>v,v1;
    while(t--)
    {
        cin>>s1>>s2;

        int n=s1.size(),m=s2.size(),x=0,y=0;

        for(int i=0; i<n; i++)
        {
            v.push_back(s1[i]);
        }
        sort(v.begin(),v.end());
        for(int i=0; i<v.size(); i++)
        {
            s+=v[i];
        }
        for(int j=0; j<m-n+1; j++)
        {
            for(int k=j; k<j+n; k++)
            {
                v1.push_back(s2[k]);
            }
            sort(v1.begin(),v1.end());
            for(int k=0; k<v1.size(); k++)
                p+=v1[k];
           // cout<<p<<" "<<s<<endl;
            if(p==s)
            {
               c++;

            }

            v1.clear();
            p.clear();

        }
       if(c>0) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
        v.clear();
        s.clear();
        c=0;



    }




}

