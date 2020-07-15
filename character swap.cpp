#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,c=0,j[100],k=0;
    string s1,s2;
    cin>>t;
    vector<int>v;
    while(t--)
    {
        cin>>n;
        cin>>s1>>s2;
        for(int i=0; i<n; i++)
        {
            if(s1[i]==s2[i]){
                c++;
            }
            else {
             v.push_back(i);
            }

        }
        //cout<<c<<" ";
        if(c==n-2 && s1[v[0]]==s1[v[1]] && s2[v[0]]==s2[v[1]]){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
        v.clear();
        c=0;

    }
}
//  cout<<"no"<<endl;



