#include<iostream>
#include <stdio.h>
#include <algorithm>
#define max 100005
#define maxx 100000000
using namespace std;
int tree[max<<2],a[max];

void build_tree(int left,int right,int pos){

        if(left==right){
                tree[pos] = a[left];
                return ;
        }
        int mid = (left + right) /2;

        build_tree(left,mid,2*pos);
        build_tree(mid+1,right,2*pos + 1);
        tree[pos] = min(tree[2*pos], tree[2*pos+1]);

}
int range_query(int left,int right,int low,int high,int pos)
{
   if(left>=low && right<=high) return tree[pos];
   int mid=(left+right)/2;
   int res=maxx;
   if(low<=mid)
   res=min(res,range_query(left,mid,low,high,2*pos));
   if(high>mid)
   res=min(res,range_query(mid+1,right,low,high,2*pos+1));
   return res;

}
int main()
{
 int t;
 scanf("%d",&t);
 for(int j=1;j<=t;j++)
 {
  int n,q,k,b;
  scanf("%d %d",&n,&q);
  for(int i=1;i<=n;i++) scanf("%d",&a[i]);
  build_tree(1,n,1);
  printf("Case %d:\n",j);
  while(q--)
  {
   scanf("%d %d",&k,&b);
   printf("%d\n",range_query(1,n,k,b,1));
  }
 }
 return 0;
}
