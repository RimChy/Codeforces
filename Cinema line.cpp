#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,x=0,y=0,z=0,flag=1;
    cin>>n;
    int a[n+1];
    for(int i=0; i<n; i++)
    {

        cin>>a[i];

    }
    for(int i=0;i<n;i++){
        if(a[i]==25) x++;
       if(a[i]==50 && x<=0){
                flag=0;
            break;
        }
        else if(a[i]==50 && x>0){
            y++;x--;
        }
        if(a[i]==100){
            if(y>=1 && x>=1){
                y--;
                x--;
            }
            else if(y<=0 && x>=3){
                x-=3;
            }
            else if((y<=0 && x<3) || (y>=1 && x<=0)){
                flag=0;
                break;
            }
        }
        //cout<<x<<y<<endl;
    }
    if(flag==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}





