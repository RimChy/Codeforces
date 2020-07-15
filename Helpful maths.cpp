#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,temp=0;
    string s;

    cin>>s;
    for(i=0; i<s.size(); i+=2)
    {
        for(j=i; j<s.size(); j+=2)
        {
            if(s[j]<s[i])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }





    cout<<s<<endl;



    return 0;
}
