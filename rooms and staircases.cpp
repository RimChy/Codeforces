#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;

        string s;
        cin>>n>>s;
        int ans = n,k;

            int l = -1, r = -1;
            for(int i = n - 1; i >= 0; i--)
            {
                if(s[i] == '1')
                {
                    r = i + 1;
                    break;
                }
            }

            for(int i = 0; i < n; i++)
            {
                if(s[i] == '1')
                {
                    l = i + 1;
                    break;
                }
            }

            if(l != -1)
            {

                k = (n - l + 1) + max(l, n - l + 1);
                ans = max(ans, k);

                k = (n - r + 1) + max(r, n - r + 1);
                ans = max(ans, k);
            }



        cout<<ans<<endl;
    }
}
