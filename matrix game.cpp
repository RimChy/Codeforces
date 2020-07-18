#include <bits/stdc++.h>
using namespace std;
int main ()
{

   int t, c=1, r, r1, cnt, x, res;
   cin>>t;
   while (t--) {
     cin>>r>>r1;
      res = 0;
      for (int i = 0; i < r; i++) {
         cnt = 0;
         for (int j = 0; j < r1; j++) {
            cin>>x;
            cnt += x;
         }
         res ^= cnt;
      }
    cout<<"Case "<<c++<<": ";
      if (!res) cout<<"Bob"<<endl;
      else cout<<"Alice"<<endl;
   }

}
