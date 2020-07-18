#include<bits/stdc++.h>
#define maxn 1024
using namespace std;

long long luck[maxn];
long long f(int n)
{
	if(n==0)
		return 0;
	int i;
	long long ans=0;
	for(int i=1;i<=maxn;i++)
	{
		if(luck[i]<n)
		{
			ans+=luck[i]*(luck[i]-luck[i-1]);
		}
		else
		{
			ans+=luck[i]*(n-luck[i-1]);
			break;
		}
	}
	return ans;
}
int main()
{
	luck[1]=4;
	luck[2]=7;
	int t=3;
	for(int i=1;i<512;i++)
	{
		luck[t++]=luck[i]*10+4;
		luck[t++]=luck[i]*10+7;
	}
	int l,r;
	scanf("%d%d",&l,&r);
	printf("%lld\n",f(r)-f(l-1));
	return 0;
}
