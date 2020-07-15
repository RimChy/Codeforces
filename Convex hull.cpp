#include <bits/stdc++.h>

using namespace std;
struct point{
    int x, y;
};
point start;
int ort(point a,point b,point c){
    return ((b.y-a.y)*(c.x-b.x)-(b.x-a.x)*(c.y-b.y));
}
int ort2(point a,point b,point c){
    int  o=((b.y-a.y)*(c.x-b.x)-(b.x-a.x)*(c.y-b.y));
    return o<0;
}
bool comp(point a,point b){
    int o=ort(start,a,b);
    if(o==0) return min( (start.x-a.x)*(start.x-a.x)+(start.y-a.y)*(start.y-a.y),(start.x-b.x)*(start.x-b.x)+(start.y-b.y)*(start.y-b.y));
        return o<0;
}
int main(){
      int n,minn=1000000,mind,ind,indexans;
       point ans[100];
      cin>>n;
      point p[100];
      for(int i=0;i<n;i++){
        cin>>p[i].x>>p[i].y;
        if(minn>p[i].y){
                minn=p[i].y;
        mind=i;

        }
        else if(p[i].y==minn && p[i].x<p[mind].x)  mind=i;

      }
      swap(p[0],p[mind]);
      start=p[0];
      sort(p+1,p+n,comp);
      ind=1;
      for(int i=1;i<n;i++){
        while(i<n-1 && ort(start,p[i],p[i+1])==0) i++;
        p[ind++]=p[i];
      }
      if(ind<3) cout<<-1<<endl;
      else {

        ans[0]=p[0];
        ans[1]=p[1];
        indexans=1;
        for(int i=2;i<ind;i++){
            ans[++indexans]=p[i];
            while(!ort2(ans[indexans-2],ans[indexans-1],ans[indexans])) ans[--indexans]=ans[indexans+1];
        }
      }
      for(int i=0;i<indexans;i++){
        cout<<ans[i].x<<" "<<ans[i].y<<endl;
      }
      cout<<endl;
}
