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
        int x=0,c=0,k;
        for(int i=0;i<n;i++){
              //  cout<<a[i]<<" ";
            k=(upper_bound(a,a+n,a[i])-a)-(lower_bound(a,a+n,a[i])-a);
            if(k>c){
                c=k;
                x=a[i];
            }

//cout<<c<<endl;
       // cout<<k<<endl;

        }

  // cout<<c<<" "<<x<<endl;
        int p=0;
        for(auto it=s.begin();it!=s.end();it++){
            if(*it!=x) p++;
        }
        if(c>p){
            c--;
            p++;
        }
        //cout<<p<<" "<<c<<endl;
      //  if(c==1) cout<<1<<endl;
        if(p>c) cout<<c<<endl;
        else cout<<p<<endl;


    c=0,p=0;
    }
}

