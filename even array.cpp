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
        int o=0,e=0,oi=0,ei=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2!=i%2){
                if(i%2==0) ei++;
                else oi++;
                if(a[i]%2==0) e++;
                else o++;
            }
        }
        if(ei==e && oi==o && ei==oi){
            cout<<e<<endl;
        }
        else cout<<-1<<endl;
    }
}
