#include<bits/stdc++.h>
using namespace std;
struct point {
int x;
int y;};
/*int compare(point p1,point p2){
    if(p1.x==p2.x) return p1.y<p2.y;
      return p1.x<p2.x;
}*/
int main()
{
    point p1[100];
    int n,t;
    scanf("%d",&t);



    while(t--){
    scanf("%d",&n);
     vector<pair<int, int>> a(n);
    int flag=1;

    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;

    }
    pair<int, int> cur;
    string ans;
    sort(a.begin(),a.end());
    cur.first=0,cur.second=0;
    int r,u;
    for(int i=0;i<n;i++){
       r=a[i].first-cur.first;
       u=a[i].second-cur.second;
       //cout<<r<<u<<endl;
       if(r<0 || u<0){
       printf("NO\n");
        flag=0;
        break;
       }
       ans+=string(r,'R');
       ans+=string(u,'U');
       cur=a[i];
    }
    if(flag==1){
        printf("YES\n");
        cout<<ans<<endl;
    }
    }



}


