#include<bits/stdc++.h>
using namespace std;
int n,plus45diagonal[100],minus45diagonal[100],samerow[100],ans[100];
void queen(int j)
{
    if(j>n)
    {

        for(int i=1; i<=n; i++)
        {

            printf("%d ",ans[i]);
        }
        printf("\n");
        return;
    }



    for(int  i=1; i<=n; i++)
    {
        if(samerow[i]!=1 && plus45diagonal[i+j]!=1 && minus45diagonal[i-j+n]!=1)
        {
            ans[j]=i;
            samerow[i]=1;
            plus45diagonal[i+j]=1;
            minus45diagonal[i-j+n]=1;
            queen(j+1);

            plus45diagonal[i+j]=0;
            minus45diagonal[i-j+n]=0;
            samerow[i]=0;

        }
    }




}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        memset(samerow,1,sizeof(samerow));
        memset(plus45diagonal,1,sizeof(plus45diagonal));
        memset(minus45diagonal,1,sizeof(minus45diagonal));
        cin>>n;



        queen(1);
    }



}
