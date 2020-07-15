#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,flag=1;
        cin>>n;
        int a[4*n+1];
        vector<int>v;
        set<int>s;
        for(int i=0;i<4*n;i++) cin>>a[i];
        sort(a,a+4*n);
        for(int i=0;i<4*n;i++){
            if(a[i]==a[i+1]){
                v.push_back(a[i]);
            i++;
            }
            else {
                flag=0;
                break;
            }
        }
        for(int i=0;i<v.size()/2;i++){
            s.insert(v[i]*v[v.size()-i-1]);
        }
        if(flag==1){
            if(s.size()==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }

}
