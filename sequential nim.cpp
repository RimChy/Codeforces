#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        int one=0;
        for(int i=0;i<n;i++) {
                cin>>a[i];
        if(a[i]==1) one++;
        }
        if(one==0) cout<<"First"<<endl;
        else{
            if(a[0]!=1) cout<<"First"<<endl;
            else{
                if(one==n) {
                    if(n%2==0) cout<<"Second"<<endl;
                    else cout<<"First"<<endl;
                }
                else{
                        int p=0;
                    for(int i=0;i<n;i++){
                        if(a[i]!=1) break;
                        else p++;
                    }
                if(p%2==0) cout<<"First"<<endl;
                else cout<<"Second"<<endl;
                }
            }
        }
    }
}
