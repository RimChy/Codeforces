#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
    long long int n,x,sum=0,summ=0,left=0,right=0;

    cin>>n>>x;
    long long int arr[n+1];
    for(int i=0;i<n;i++) {
            cin>>arr[i];
        sum+=arr[i];
    }
    summ=sum;
    bool f1=true,f2=true;
    if(sum%x==0) {
            long long i=0,j=n-1;
        while(i<n){
                sum-=arr[i];
                left++;
                if(sum%x!=0){
                    f1=false;
                    break;
                }
                i++;
            }
            while(j>=0){
                summ-=arr[j];
                right++;
                if(summ%x!=0) {
                    f2=false;
                    break;
                }
                j--;
            }
            long long c1=n-left,c2=n-right;
            if(f1==false && f2==false) cout<<max(c1,c2)<<endl;
            else if(f1==false && f2==true) cout<<c1<<endl;
            else if(f1==true && f2==false) cout<<c2<<endl;
            else cout<<-1<<endl;
    }
    else cout<<n<<endl;







     }







}
