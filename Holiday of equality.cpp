#include<bits/stdc++.h>


using namespace std;
int main()
{

   int n,i,j,l=0,sum;
   cin>>n;
   vector<int>v;

   for(i=0;i<n;i++){
    cin>>j;
    v.push_back(j);


   }
   sort(v.begin(),v.end());
   for(int p=0;p<v.size();p++){
    sum = v[v.size()-1]-v[p];
    l+=sum;
   }
   cout<<l<<endl;



}

