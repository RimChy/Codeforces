#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v,v1;
        int a;
        v.push_back(0);
        for(int i=1;i<=n;i++){
            cin>>a;
            v.push_back(a);
        }
        int k=2,p=1,x=0,m=2,i=2,j=2,y,z;
        while(i<v.size()){
                j=i,m=2,p=1,y=j;
                while(j<v.size()){
                    //cout<<j<<endl;

            if(j*m<v.size()){
            if(v[j*m]>v[j]){
               j=j*m;
                p++;
                //cout<<"aschi"<<endl;

            }
            else{
                m++;
            }
            }
            else break;



                }
             //cout<<p<<endl;
                if(p>x){
                    x=p;
                   z=y;

                }
        i++;

        }
        //cout<<z<<endl;
        if(v[1]<v[z]) x++;
        if(n==1) cout<<1<<endl;
        else
         cout<<x<<endl;



    }
}
