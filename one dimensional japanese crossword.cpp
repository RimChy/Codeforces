#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    vector<int>v;
    int i=0;
    while(i<n){
            int p=0;
        if(s[i]=='B'){
            while(s[i]=='B' && i<n){
                p++;
                i++;



        }
        v.push_back(p);
    }
    else i++;
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;

}
