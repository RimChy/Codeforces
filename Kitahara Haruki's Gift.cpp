#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,u=0,y=0;
    cin>>n;
    int a[n+1];
    long long int sum=0,sum1=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==100)x++;
        else y++;
        sum+=a[i];
    }

     if (sum % 200 != 0) cout << "NO" << endl;
    else {
        int half = sum / 2;
        bool ans = false;
        for (int i = 0; i <= y; ++i)
            if (200 * i <= half && half - 200 * i <= x * 100) ans = true;
        if (ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }


}
