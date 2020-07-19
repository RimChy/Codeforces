#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string a,b,c;
        cin>>a>>b>>c;
        int flag=1;
        for(int i=0;i<c.size();i++){

            if(a[i]==c[i]) swap(b[i],c[i]);
            else if(b[i]==c[i]) swap(a[i],c[i]);
            else {
                flag=0;
                break;
            }

        }
        if(flag==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
