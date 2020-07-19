#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,l=1,p=1,x=0,y=0;
    cin>>n;
    vector<int>v,v1,v2;
    v1.push_back(0);
    v2.push_back(0);
    for(int i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(int i=0; i<v.size(); i++)
    {


        if(v[i]==2)
        {
            x++;


            while(v[i]==v[i+1])
            {
                l++;
                i++;
            }
            v1.push_back(l);
            l=1;

        }

        if(v[i]==1)
        {
            y++;

            while(v[i]==v[i+1])
            {
                p++;
                i++;
            }



            v2.push_back(p);
            p=1;
        }
    }


    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    //8cout<<v1[v1.size()-1]<<" "<<v2[v2.size()-1];
    cout<<2*min(v1[v1.size()-1],v2[v2.size()-1])<<endl;

}
