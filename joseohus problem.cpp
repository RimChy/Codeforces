#include <bits/stdc++.h>
using namespace std;


int josephus(int n, int k)
{
  if (n == 1)
    return 1;
  else

    return (josephus(n - 1, k) + k-1) % n + 1;
}


int main()
{
  int t,n,k,c=1;
  cin>>t;
  while(t--){
        cin>>n>>k;
  cout<<"Case "<<c++<<": "<<josephus(n,k)<<endl;
  }
  return 0;
}
