#include<bits/stdc++.h>
using namespace std;
struct point {
int x;
int y;
};
int main()
{
    set<double>s;
    int n;
    double a,b;
    cin>>n>>a>>b;
    point p[n+1];
    for(int i=0;i<n;i++) cin>>p[i].x>>p[i].y;
    for(int i=0;i<n;i++){
        double k=(p[i].x-a),m=(p[i].y-b);
        if(k==0) s.insert(20000);
        else if(m==0) s.insert(30000);
        else {
            s.insert(1.0*(m/k));
        }
    }
    cout<<s.size()<<endl;
}
