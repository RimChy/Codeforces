/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,m,a,b;
    cin>> n >> m >>a;


    cout<<(long long)(ceil(n/a)*ceil(m/a))<<endl;
    return 0;
}
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int j=0;
		for(int i=0;i<s.size();i++){
			if((s[i]>='0' && s[i]<='6' )|| s[i]=='O') j++;
		}
		int x=j/6,y=j%6;
		if(j==1) cout<<1<<" BALL"<<endl;
		else if(j<6) cout<<j<<" BALLS"<<endl;
		else if(j==6) cout<<1<<" OVER"<<endl;
		else if(j%6==0) cout<<x<<" OVERS"<<endl;
		else{
            if(x==1){
                cout<<1<<" OVER";
                if(y==1) cout<<" "<<1<<" BALL"<<endl;
                else cout<<" "<<y<<" BALLS"<<endl;
            }
            else{
                    cout<<x<<" OVERS";
            if(y==1) cout<<" "<<1<<" BALL"<<endl;
            else cout<<" "<<y<<" BALLS"<<endl;

            }
		}

	}




	return 0;
}
