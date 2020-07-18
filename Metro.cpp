#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,l=0,p=0;
    cin>>n>>s;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }


        for(int i=0;i<s;i++){
            if( a[i] == 0 ) l++;


        }
        for(int i=n-1;i>=s-1;i--){
            if(b[i] == 0) p++;
        }
        if(s==n) {
            cout<<"YES"<<endl;
            return 0;
        }

        if(l>0 && p>0) cout<<"NO"<<endl;
        else if(l<=0 && p<=0) cout<<"YES\n";
        else if(l>0 && p<=0 && a[0] != 0 && b[n-1] != 0) cout<<"YES\n";
        else if(l<=0 && p>0) cout<<"YES\n";

        else cout<<"NO\n";



}

