#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ans,r,l,cnt;
    string s,s1;
    cin>>s>>s1;
         cnt=0;
         n=s.size();
         m=s1.size();
         l=m;
         for(int i=0;i<n;i++){
            if(s.substr(i,l)==sp.substr(0,m))  
               {
                   cnt++;
                   i=i+l-1;
               }

         }
        cout<<cnt<<endl;
    }
    return 0;
}
