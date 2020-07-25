#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[2*n+1];
        map<int,int>mp;
        for(int i=0;i<2*n;i++){
            cin>>a[i];
            if(i==0){

             cout<<a[0]<<" ";
             mp[a[0]]++;}
            else {
                if(mp[a[i]]<1) {
                    cout<<a[i]<<" ";
                    mp[a[i]]++;
                }
            }

        }
        cout<<endl;
    }
}
