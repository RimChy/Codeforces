#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v,ve,vo;
        int o=0,e=0;
        for(int i=0;i<2*n;i++){
            int a;
            cin>>a;
            v.push_back(a);
            if(a%2==0) {
                ve.push_back(i);
                e++;
            }
            else {
                vo.push_back(i);
                o++;
            }
        }
        int  countt=0,c=0;
        if(o%2==0 && e%2==0){
               if(o!=0){
                for(int i=0;i<vo.size()-2;i+=2) cout<<vo[i]+1<<" "<<vo[i+1]+1<<endl;
               }
            if(o!=0){
            for(int i=0;i<ve.size();i+=2) cout<<ve[i]+1<<" "<<ve[i+1]+1<<endl;
            }
            else for(int i=0;i<ve.size()-2;i+=2) cout<<ve[i]+1<<" "<<ve[i+1]+1<<endl;
        }
        else if(o%2!=0 && e%2!=0){
            for(int i=0;i<ve.size()-1;i+=2) cout<<ve[i]+1<<" "<<ve[i+1]+1<<endl;
            for(int i=0;i<vo.size()-1;i+=2) cout<<vo[i]+1<<" "<<vo[i+1]+1<<endl;

        }





    }

}
