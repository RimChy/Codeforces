#include<bits/stdc++.h>
using namespace std;


int func(int n,int m) {
  int ans = 1;
  int tmp = m % n;
  while (tmp) {
    tmp= tmp * 10 + m;
    if(tmp >= n)
      tmp %= n;
    ans++;
  }
  return ans;
}

int main() {
  int t,c=1;
  cin>>t;

  int n, m;
  while(t--) {
    cin>>n>>m;
   cout<<"Case "<<c++<<": "<<func(n,m)<<endl;
  }
  return 0;
}

