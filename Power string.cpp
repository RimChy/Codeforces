#include<bits/stdc++.h>
#define maxx 1000005
using namespace std;



int lps[maxx];

void flps( string s)
{
    int m = s.size();
    lps[0]=-1;
    lps[1] = 0;
    int indx =0,pos=2;

    while (pos < m)
    {
        if (s[pos - 1] == s[indx])
        {
            indx = indx + 1;
            lps[pos] = indx;
            ++pos;
        }


       else if (indx > 0)
        {
            indx = lps[indx];
        }


        else
        {
            lps[pos] = 0;
            ++pos;
        }
      //  cout<<pos<<endl;
//        cout<<indx<<endl;
//       for(int i=0;i<m;i++) cout<<lps[i]<<" ";

    }
}

int main()
{
    string s;
    int x,fI;
    while (cin>>s && s[0] != '.')
    {
        flps(s);


        fI = lps[s.size()-1];

        if (fI != -1 && s[fI] != s[s.size()-1])
            fI = min(0, fI - 1);

         x =s.size()/( s.size()-1 - fI);

        cout <<x<<endl;
    }
}
