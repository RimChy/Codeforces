#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    string s;
    cin>>n>>k>>s;
    if(n==1){
            if(k==1)
        s[0]='0';
    }
    else {
        for (int i=0; i<n; i++)
            {
                if (k == 0)
                    break;

                if (i == 0)
                {
                    if (s[i] > '1')
                    {
                        s[i] = '1';
                        --k;
                    }
                }
                else
                {
                    if (s[i] == '0')
                        continue;

                    --k;
                    s[i] = '0';
                }
            }




        }







    cout<<s<<endl;
}
