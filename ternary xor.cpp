#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        int n;
        cin>>n>>s;

        string a,b;

        int flag = 1;

        for(int i = 0 ; i<s.length() ; i++)
        {
            if(s[i] == '0')
            {
                a+='0';
                b+='0';

            }
            else if(s[i] == '1')
            {
                if(flag)
                {
                    a+='1';
                    b+='0';
                    flag = 0;
                }
                else
                {
                    a+='0';
                    b+='1';
                }
            }
            else
            {
                if(flag)
                {
                   a+='1';
                    b+='1';
                }
                else
                {
                    a+='0';
                    b+='2';
                }
            }

        }
        cout<<a<<endl<<b<<endl;
        a.erase();
        b.erase();
    }

}
