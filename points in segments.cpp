#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int x,y,t,n,q,c=1,a;

     scanf("%d",&t);
     while(t--){
            scanf("%d %d",&n,&q);

    vector<int> v;

    for(int i=0; i<n; i++)
    {
        scanf("%d",&a);
        v.push_back(a);
    }

   // sort (v.begin(),v.end());
   printf("Case %d:\n",c++);
    while(q--){


   // vector<int>::iterator lower,upper;
 scanf("%d %d",&x,&y);
   int  lower = lower_bound (v.begin(),v.end(),x)-v.begin();
    int  upper = upper_bound (v.begin(),v.end(),y)-v.begin();

    printf("%d\n",upper-lower);
    }
     }


}
