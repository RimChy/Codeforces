#include<bits/stdc++.h>
#define maxx 1000005
using namespace std;

int lps[maxx];
string text,rev;
int kmp(string text,string rev)
{
    int j=0;

    int t=text.size();
    int p=rev.size();

    for(int i=0;i<t;i++)
    {
        if(text[i]==rev[j])
        {

            j++;
        }
        else
        {
            while(j!=0)
            {
                j=lps[j-1];

                if(text[i]==rev[j])
                {
                    j++;
                    break;
                }
            }
        }
    }
    return j;
}



void flps(string rev)
{
    int p=rev.size(),j=0;
    lps[0]=0;



    for(int i=1;i<p;i++)
    {
        if(rev[i]==rev[j])
        {
            lps[i]=j+1;
            j++;
        }
        else
        {
            while(j!=0)
            {
                j=lps[j-1];
                if(rev[i]==rev[j])
                {
                    lps[i]=j+1;
                    j++;
                    break;
                }
            }
        }
    }
    //cout<<j<<endl;
}


int main()
{



 int t,n,m,c=1;
 scanf("%d",&t);

 while(t--)
 {
     cin>>text;

     rev=text;
     reverse(rev.begin(),rev.end());
     memset(lps,0,sizeof(lps));
    flps(rev);

     n=kmp(text,rev);

     m=2*rev.size()-n;
     cout<<"Case "<<c++<<": "<<m<<endl;

 }



}
