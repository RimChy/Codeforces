#include<bits/stdc++.h>

 using namespace std;

 int main()

 {

   int a, b;
   scanf ( "%d%d", &a, &b );
  int ans = 1;
  for ( int j = 1; j <= min( a, b ); j++ )
        {
            ans *= j;
        }
    printf ( "%d\n", ans );
 }
