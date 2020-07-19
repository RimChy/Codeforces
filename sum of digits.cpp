#include<bits/stdc++.h>
using namespace std;
int main() {
	 string s;
	 cin>>s;
	 int ans=0;
	 int l=s.length();
	while(l>1){
		int sum=0;
		for(int i=0;i<l;i++){
			sum+=s[i]-'0';
		}
		 s=to_string(sum);
         l=s.length();
         ans++;
	 }
	 cout<<ans<<endl;
	return 0;
}
