#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    vector<int>v;

    cin>>t;
    while(t--)
    {
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='o' && s[i+1]=='n' && s[i+2]=='e')
            {
                v.push_back(i+2);
                i=i+2;

            }
            else if(s[i]=='t' && s[i+1]=='w' && s[i+2]=='o')
            {
                 if(s[i+2]=='o' && s[i+3]=='n' && s[i+4]=='e'){
                    v.push_back(i+2);
                    i=i+4;
                 }
                 else {
                    v.push_back(i);
                    i=i+2;
                 }
            }
        }

        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]+1<<" ";
        }
        cout<<endl;
        v.clear();
    }
}
