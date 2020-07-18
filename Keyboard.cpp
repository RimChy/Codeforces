#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,s2,s3,s4,s5;
    s1="qwertyuiop",s2="asdfghjkl;",s3="zxcvbnm,./";
    s4=s1+s2+s3;
    cin>>s>>s5;
    for(int i=0; i<s5.size(); i++)
    {

        for(int j=0; j<s4.size(); j++)
        {
            while(s5[i] == s4[j])
            {
                if(s == "L")
            {
                printf("%c",s4[j+1]);
                break;
                }
                else
                {
                 printf("%c",s4[j-1]);
                 break;
                }

            }

        }

    }
    cout<<endl;
}
