#include <bits/stdc++.h>

using namespace std;

int a[101];

int main () {
	int n;
	cin>>n;
	int ans=0;
	int dp[n+1];
	dp[0]=-1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]==0){
                ans++;

		}
		else if(a[i]==a[i-1] && a[i]!=3){
                a[i]=0;
        ans++;
		}
		else if(a[i]==3) a[i]=3-a[i-1];
	}

	cout<<ans<<endl;
}
