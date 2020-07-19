#include<bits/stdc++.h>
#define maxx 10000
using namespace std;
bool hobeni(int n){
    if(n==sqrt(n)*sqrt(n)) return true;
    return false;
}

int amar_matha(int n){
    int p=0;
vector<int>v;
set<vector<int>>s;
    for(int i=1;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
                double x=sqrt(i*i+j*j);
                if(x==int(x) && x<=n ){
                    p++;
                }

                }
            }


   return  p;
}
int main()
{
    int n;
    cin>>n;
    cout<<amar_matha(n)<<endl;


}
