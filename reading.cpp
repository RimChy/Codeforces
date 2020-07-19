#include<bits/stdc++.h>
using namespace std;
struct point{
int a;
int x;};
int comp(point y,point b){
    if(y.a==b.a) return y.x>b.x;
    return y.a<b.a;
}
int comp2(point y,point b){
    return y.x<b.x;
}
int main()
{
    int n,k;
    cin>>n>>k;
vector<int>v;
point b[n+1];
       for(int i=0;i<n;i++){
           cin>>b[i].a;
           b[i].x=i+1;
         // v.push_back(make_pair(a,i+1));
     }
     sort(b,b+n,comp);
    /* for(int i=0;i<n;i++){
        cout<<b[i].a<<" "<<b[i].x<<endl;
     }*/
     //cout<<v[n-k].first<<endl;
    cout<<b[n-k].a<<endl;
    // sort(b+n-k,b+n-k+n,comp2);
     for(int i=n-k;i<n;i++){
        v.push_back(b[i].x);
     }
     sort(v.begin(),v.end());
     for(int i=0;i<v.size();i++){
        printf("%d ",v[i]);
     }
     cout<<endl;

}
