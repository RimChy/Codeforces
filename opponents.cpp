#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    vector<string>v;
    string s;
    int p=0,k=0,x=0;
    for(int i=0;i<d;i++){
            p=0;
        cin>>s;
        v.push_back(s);
        for(int i=0;i<n;i++){
            if(s[i]=='1') {
                    p++;
            }

        }
        if(p==n){
            k=0;
        }
        else {
            k++;
            x=max(k,x);
        }
    }
    cout<<x<<endl;
}
