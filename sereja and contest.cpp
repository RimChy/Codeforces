#include <iostream>
using namespace std;

int a[4001];
int main()
{
	int x, k, t, p, q, ans1=0, ans2=0;
	cin>>x>>k;
	a[x]=2;
	while (k--) {
		cin>>t;
		if (t==1) {
			cin>>p>>q;
			a[p]=2; a[q]=1;
		}
		else {
			cin>>p;
			a[p]=2;
		}
	}
	p=1; while (p<x) {
		while (a[p]>0) p++;
		for (q=0; p<x&&a[p]==0; p++,q++);

		ans1+=(q+1)/2;
		ans2+=q;
	}
	cout<<ans1<<" "<<ans2<<endl;
	return 0;
}
