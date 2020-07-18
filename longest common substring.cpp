#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
   while(cin>>s1>>s2){
            int mat[s1.size()+1][s2.size()+1];
            int n=s1.size(),m=s2.size();
    for(int i=0;i<=s1.size();i++){
        for(int j=0;j<=s2.size();j++){
            if(i==0||j==0) mat[i][j]=0;
            else if(s1[i-1]==s2[j-1]) mat[i][j]=mat[i-1][j-1]+1;
            else mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
        }
    }
    cout<<mat[n][m]<<endl;
   /*if(mat[n][m]==0) cout<<0<<" "<<0<<" "<<0<<endl;
         else {int i=n,j=m,k=0,x=0,y=0;
         char ans[100];
         while(i>0 && j>0){
            if(s1[i-1]==s2[j-1]) {
                ans[k++]=s1[i-1];
                x=i,y=j;
             //   cout<<i<<" "<<j<<endl;
                i--;j--;
            }
            else if(mat[i-1][j]>=mat[i][j-1]) i--;
            else j--;
         }
         cout<<x<<" "<<y<<" "<<mat[n][m]<<endl;
    }*/
}
}

