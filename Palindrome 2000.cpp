#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int arr[100][100],n,m;

        int lcs(int index1,int index2 )
        {
            if(index1==n)
                return 0;
            if(index2==m)
                return 0;
            if(arr[index1][index2] != -1)
                return arr[index1][index2];
            int x=0,y=0;
            if(s1[index1]==s2[index2])
            {
                return arr[index1][index2]=1+lcs(index1+1,index2+1);
            }
            x=lcs(index1,index2+1);
            y=lcs(index1+1,index2);
            return arr[index1][index2]=max(x,y);
        }
        int main()
        {
            cin>>s1;

            n=s1.size();
            m=s2.size();
            memset(arr,-1,sizeof(arr));
            cout<<lcs(0,0)<<endl;

        }

