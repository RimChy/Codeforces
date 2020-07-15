#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,a,sum=0,y,l=0;
    cin>>n>>s;
    if(s%n==0){
        cout<<s/n<<endl;
    }
    else{
        cout<<s/n+1<<endl;
    }
}
