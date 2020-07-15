#include<bits/stdc++.h>
using namespace std;
struct t
{
    int ti;
    int ei;
};

int main()
{

    int n,m,minn=1000000000,mind,sum=0,b=0;
    cin>>n>>m;
    t a[n+1];
    for(int i=0;i<n;i++)
    {
       cin>>a[i].ti>>a[i].ei;
       if(minn>a[i].ti){
                minn=a[i].ti;
        mind=i;

        }
        else if(a[i].ti==minn && a[i].ei>a[mind].ei)  mind=i;

      }
      swap(a[0],a[mind]);
      for(int i=0;i<n;i++){
            m+=a[i].ti;
      b+=(m-a[i].ei);
       // cout<<a[i].ti<<" "<<a[i].ei<<endl;
      }
      cout<<b<<endl;

    }

