#include<bits/stdc++.h>
using namespace std;
int main(){
        int t,a,b,c,i,d,n;
    string s;
    for(cin>>t;t--;){
        cin>>s;
        int px,py,x=0,y=0,n=0;
        map<pair<pair<int,int>,pair<int,int>>,int> m;
        for(i=0;i<s.size();i++){
                px=x,py=y;
            if(s[i]=='N') x++;
            if(s[i]=='E') y++;
            if(s[i]=='W') y--;
            if(s[i]=='S') x--;
            if(m[{{px,py},{x,y}}]) n++;
            else n+=5;
            m[{{px,py},{x,y}}]=m[{{x,y},{px,py}}]=1;

        }
        cout<<n<<endl;
    }
}
