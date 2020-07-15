#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //vector<int>v;
    int a[n+1],m,ans=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        //m=lower_bound(a,a+n,(a[i]*2)+1)-a;
       // cout<<m<<endl;
       // ans=max(ans,m-i);
    }
    //cout<<ans<<endl;
    for(int i=0;i<n;i++){
       int j = i;
		while (j + 1 < n && a[j + 1] <= a[j] * 2){
			++j;
		}
		ans = max(ans, j - i + 1);
		i = j;
		//cout<<ans<<endl;

   }
    cout<<ans<<endl;

}
