#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(a==b) cout<<0<<endl;
        else{
                if(b%a!=0 && a%b!=0) cout<<-1<<endl;
                else{
                        long long x,ans=0,flag=0;
                    if(b>a) x=b/a;
                else if(a>b) x=a/b;
                while(x>1){
                    if(x%8==0){
                        ans++;
                        x/=8;
                    }
                    else if(x%4==0){
                        ans++;
                        x/=4;
                    }
                    else if(x%2==0){
                        ans++;
                        x/=2;
                    }
                    else {
                        flag=1;
                        break;
                    }
                }
                if(flag==1) cout<<-1<<endl;
                else cout<<ans<<endl;
                }
        }
    }
}
