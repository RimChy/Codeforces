#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100],l=0,m=0;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>a[i];
        v.push_back(a[i]);
        l+=a[i];
        }
        sort(v.begin(),v.end());
        int d=l/n;
        cout<<d<<endl;
    if(a[0]==v[v.size()-1]){
        cout<<0<<endl;
    }
    else {
    for(int i=v.size()-1;i>0;i--){
        while(a[0]!=v[i]){
            m+=1;
            v[i]-=1;
            while(a[0]+m>v[i]){
                i--;
                cout<<m<<endl;
                break;
            }

        }
    }
    }



}
