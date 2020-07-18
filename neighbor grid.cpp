#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long row,col;
        cin>>row>>col;
        long long mat[row+2][col+2],mat2[row+2][col+2];
        for(long long int i=0;i<row;i++){
                for(long long int j=0;j<col;j++){
            cin>>mat[i][j];

                }
        }
        bool ok=true;
       long long i=0,j=0;
        for(i=0;i<row;i++){
            for(j=0;j<col;j++){

            if(i>0 && i<row-1 && j>0 && j<col-1){
                if(mat[i][j]<=4) mat[i][j]=4;
                else{
                    ok=false;
                    break;
                }
               // cout<<mat[i][j]<<" ";
                //j++;
            }
            else if(i==0 && j==0 || i==0 && j==col-1 || i==row-1 && j==0 || i==row-1 && j==col-1){
                if(mat[i][j]<=2) mat[i][j]=2;
                else{
                    ok=false;
                    break;
                }
               // cout<<mat[i][j]<<" ";
               // j++;
            }
            else{
                if(mat[i][j]<=3) mat[i][j]=3;
                else{
                    ok=false;
                    break;
                }
               // cout<<mat[i][j]<<" ";
                //j++;
            }
                }

        }
        if(ok){
            cout<<"YES"<<endl;
            for(long long i=0;i<row;i++){
                for(long long j=0;j<col;j++){
                        cout<<mat[i][j];
                    if(j==col-1) cout<<endl;
                else cout<<" ";
                }
            }
           // cout<<endl;
        }
        else cout<<"NO"<<endl;






    }
}
