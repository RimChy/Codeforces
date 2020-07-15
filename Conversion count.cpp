#include<bits/stdc++.h>
using namespace std;
long long a[200005], ans=0;
void Merge(long long left_begin,long long left_end,long long right_begin,long long right_end)
{
    long long pos=0,pp=left_begin;
    long long temp[right_end-left_begin+3];
    while(left_begin<=left_end&&right_begin<=right_end)
    {
        if(a[left_begin]<=a[right_begin])
            temp[pos++]=a[left_begin++];
        else
        {
            ans=ans+(left_end-left_begin+1);
            temp[pos++]=a[right_begin++];
        }
    }
    while(left_begin<=left_end) temp[pos++]=a[left_begin++];
    while(right_begin<=right_end) temp[pos++]=a[right_begin++];
    for(long long i=0;i<pos;i++)
        a[pp+i]=temp[i];
    return;
}

void MergeSort(long long left,long long right)
{
    long long mid=(left+right)>>1;
    if(left<right)
    {
        MergeSort(left,mid);
        MergeSort(mid+1,right);
        Merge(left,mid,mid+1,right);
    }
}

int main()
{
    long long i,j,k,n,m,d,test,t=0;
    scanf("%lld",&test);
    while(test--)
    {
        ans=0;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        MergeSort(0,n-1);
        printf("%lld\n",ans);
    }
    return 0;
}
