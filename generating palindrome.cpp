#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s1,x,s2;
    cin>>t;

    for(int k=0;k<t;k++){
    cin>>x;
      s1 = x;
		for (int i = 0, j = s1.length() - 1; i < j; i++, j--) {
			swap(x[i], x[j]);
		}
		s2= x;


    int n=s1.size(),m=s2.size(),mat[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0||j==0) mat[i][j]=0;
            else if(s1[i-1]==s2[j-1]) mat[i][j]=mat[i-1][j-1]+1;
            else mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
        }
    }
    cout<< "Case "<<k+1<<": "<<s1.size()-mat[n][m]<<endl;
    }


}

