#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,ci,sumi,a,b,c;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&ci,&sumi);
        if(ci>=sumi){
            cout<<sumi<<endl;
        }
            else {
                    if(sumi%ci == 0){
                        cout<<(sumi/ci)*(sumi/ci)*ci<<endl;
                    }
                else {
                    x=sumi/ci;
                    y=sumi%ci;
                    a=(x+1)*(x+1)*y+((x)*(x))*(ci-y);
                    cout<<a<<endl;
                }
            }
            x=0;
            y=0;
            a=0;
        }

}
