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
        set<int>s;
        for(int i=0;i<n;i++){
            cin>>a[i];
        s.insert(a[i]);

        }
        sort(a,a+n);
        int x=0,c=0,k=1;
        for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            if(a[i]!=a[i+1]){
                if(k-c>c){
                    c=i+1-c;
                    x=a[i];
                }
            }
            cout<<c<<endl;
            k=i+1;

        }
        cout<<c<<" ";
        if(n-k>c) {
                c=n-k;

        x=a[n-1];
        }

        int p=0;
        for(auto it=s.begin();it!=s.end();it++){
            if(*it!=x) p++;
        }
        if(c>n/2){
                c=n/2;
            p++;
        }
        cout<<p<<" "<<c<<endl;
      //  if(c==1) cout<<1<<endl;
        if(p>c) cout<<c<<endl;
        else cout<<p<<endl;


    c=0,p=0;
    }
}
