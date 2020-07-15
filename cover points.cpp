#include<bits/stdc++.h>
using namespace std;

struct point{
int x;
int y;};
int main()
{
    int n;
    cin>>n;
    int sum=0;
    point p[n+1];
    for(int i=0;i<n;i++){
        cin>>p[i].x>>p[i].y;
        sum=max(sum,p[i].x+p[i].y);
    }
    cout<<sum<<endl;

}
