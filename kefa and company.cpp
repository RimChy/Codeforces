#include<bits/stdc++.h>
using namespace std;
struct point{
int m;
int s;};
int compare(point p1,point p2){
    if(p1.m==p2.m) return p1.s<p2.s;
    return p1.m<p2.m;
        }
int main()
{
    int n,k;
    cin>>n>>k;
    point a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i].m>>a[i].s;
    }

    sort(a,a+n,compare);
    long long int res=a[0].s,sum=a[0].s;
    int beg=0;
     for (int i = 1; i < n; ++i) {
        while ((a[i].m - a[beg].m) >= k) {
            sum -= a[beg].s;
            ++beg;
        }
        sum += a[i].s;
        res = max(res, sum);
    }
    cout<<res<<endl;

}
