#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a;
        for(int i=0;i<n;i++){
           int b;
         cin>>b;
         a.push_back(b);
        }
        sort(a.begin(),a.end());

        int x,flag=0;
        for(int i=1;i<=1023;i++){
                vector<int>v;
            for(int j=0;j<n;j++){
               v.push_back(a[j]^i);
            }
            //sort(v.begin(),v.end());
        for(int k=0;k<v.size();k++){
            cout<<v[k]<<" ";
        }
        cout<<endl;
            if(v==a){
                x=i;
                flag=1;
                break;
            }

        }
        if(flag==0) cout<<-1<<endl;
        else cout<<x<<endl;
    }
}
