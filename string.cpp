#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
    string str0="ABCDEFGH";
    string str1="ABCDEFGH";
    string str2="Extinction is the rule.";
    string str3="Survival is the exception.";

    cout<<"Is str0 & str1 same: "<<(str0==str1)<<endl;

    string str4=str2+" "+str3;

    cout<<"Concat str2 & str3: "<<str4<<endl;

    for(char i='a';i<='g';i++)
    {
        str0+=i;
    }

    cout<<"New str0: ";
    for(int i=0;i<str0.size();i++)cout<<str0[i];
    cout<<endl;

    str0.erase(0,3);

    cout<<"After erase operation in str0: "<<str0<<endl;

    return 0;
}
