#include <bits/stdc++.h>

using namespace std;
string s;

char ans[31];
int n,k,p=0,arr[31];

void permutation(int i)
{
    if (i==n)
    {
        for (int i=0;i<n;i++){
       cout << ans[i];

        }
          cout << endl;
          p++;
        return;
    }


        for (int j=0;j<n;j++)
        {
            if (!arr[j])
            {
                arr[j]=1;
                ans[i]=s[j];
                permutation(i+1);
                arr[j]=0;
            }
        }
      if (p==k)
        return;

    return;
}

int main()
{
    int t;
    cin >>s>>k;
    n=s.length();
        memset(arr,0,sizeof(arr));


        permutation(0);
        p=0;


}
