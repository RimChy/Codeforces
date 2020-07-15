#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int k=0,l=s.size();
    for(int i=0;i<l-1;i++){
        if(s[i]==s[i+1]){
            k++;
            s.erase(i,2);
            l=s.size();
            i=-1;
        }
    }
    //cout<<k<<endl;
    if(k%2==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
