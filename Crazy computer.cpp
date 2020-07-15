#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,a,sum,l=1;
    cin>>n>>c;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    for(int i=1;i<n;i++){

        if(v[i]-v[i-1] <= c){

            l++;



        }
        else l=1;
    }
    cout<<l<<endl;
}
