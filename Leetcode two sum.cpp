#include<bits/stdc++.h>
using namespace std;
struct indx{
    int i;
    int j;
};
indx twosum(vector<long long int>&v,long long target)
{
    indx x;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size() && j!=i;j++){
            if(v[i]+v[j]==target){
                x={i,j};
                break;
            }
        }
    }
    return x;
}
int main()
{
    int n;
    cin>>n;
    vector<long long>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    long long target;
    cin>>target;
    indx y=twosum(v,target);
    cout<<y.i<<" "<<y.j<<endl;


}
