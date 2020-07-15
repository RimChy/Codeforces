#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
            int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++) {
            int a;
            cin>>a;
            v.push_back(a);       }
        sort(v.begin(),v.end());
        int maxx=INT_MAX;
        for(int i=1;i<v.size();i++){
            if(v[i]-v[i-1]<maxx) maxx=v[i]-v[i-1];
        }
       printf("%d\n",maxx);
    }
}
