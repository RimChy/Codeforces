#include <iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main()
{
    string s;
    int i,lower=0,upper=0;
    cin>>s;
    for(i = 0; i < s.length(); i++)
    {
        if(islower(s[i]))
        {
            lower ++;
        }
        else
        {
            upper ++;
        }


        if(upper < lower)
        {
            for(i = 0; i < s.length(); i++)
            {

                s[i] = toupper(s[i]);
            }
        }
        else
        {
            for(i = 0; i < s.length(); i++)
            {

                s[i] = tolower(s[i]);

            }
        }
    }
    cout<<s<<endl;


    return 0;


}
