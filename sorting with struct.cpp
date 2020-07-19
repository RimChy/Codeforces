#include <bits/stdc++.h>
#include <iostream>
using namespace std;

/*bool compare (pair<string,int> st1,pair<string,int> st2)
{
    if(st1.second == st2.second)
    {
        return st1.first <st2.first;
    }
    return st1.second>st2.second;
}
*/
int main()
{
/*string str;
cin>> str;
cout << str <<endl<<str.size();*/
//pair<string,int>student("abc",10);//student.first="abc";student.second=10;
   //cout << student.first<<endl << student.second<< endl;
pair<int,int>point;
   vector < pair<int,int> > v;
   int n;
   scanf("%d",&n);
    for(int i=0 ;i<n ; i++)
   {
       int x,y;
       cin>> x >> y;
       pair<int,int>point(x,y);
       v.push_back(point);
}

   sort (v.begin(),v.end());
      for(pair<int,int> var : v)

   cout << v[i].first << " " << v[i].second << endl;*/
   vector<int>vec;

   for(int i=0 ; i<5 ; i++)
    vec.push_back(i);
   for(int x: vec)
    cout<<vec[x];
      vector <pair<string,int>>v;
   /* for(int i=1 ; i<5 ; i++)
    {
        string name;
        int marks;
        cin>> name>> marks;
    pair<string,int>student(name,marks);
    v.push_back(student);
    }
    sort(v.begin(),v.end(),compare);
       for(int i=1 ; i<5 ; i++)
        cout << v[i].first << " " << v[i].second;*/
   return 0;

}

