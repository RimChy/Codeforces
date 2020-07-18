#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,h,l,t,sum=0;
    double a;
    vector<double>v;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n>>l>>h;
        while(n--)
        {
            cin>>a;
            v.push_back(a);
            for(int j=0; j<v.size(); j++)
            {
                sum+=v[i];
                double avg=sum/n;
                double da=abs(v[i]-avg);
                double dl=abs(v[i]-l);
                double dh=abs(v[i]-h);
                if(min(dl,dh) < da)
                {
                    cout<<v[i]<<endl;
                }
            }
            sum=0;


        }
    }
}
