#include<bits/stdc++.h>

using namespace std;
struct point
{
    int x;
    int y;
};
int onSegment(point p1, point p3, point p2)
{
    if(p3.x>=min(p1.x, p2.x) && p3.x<=max(p1.x, p2.x))
        return 1;
    else
        return 0;
}
int orientation(struct point p1, struct point p2, struct point p3)
{
    int x= ((p2.y-p1.y)*(p3.x-p2.x))-((p3.y-p2.y)*(p2.x-p1.x));
    if(x>0)
        return 1;
    else if(x<0)
        return 2;
    else
        return 0;
}
void intersectPoint(point p1,point p2,point p3,point p4)
{
    float a1,b1,c1,a2,b2,c2,a,b,d;
    a1=p1.y-p2.y;
    b1=p2.x-p1.x;
    c1=p2.x*p1.y-p1.x*p2.y;
    a2=p3.y-p4.y;
    b2=p4.x-p3.x;
    c2=p4.x*p3.y-p3.x*p4.y;
    a=(c1*b2-c2*b1), d=(a1*b2-a2*b1);
    b=(a1*c2-a2*c1);
    if(d != 0)
    {
        printf("POINT %.2f %.2f\n",a/d,b/d);
    }
    else if(d==0 && a==0 && b==0)
        cout<<"LINE"<<endl;
//   cout<<a<<" "<<b<<endl;
    //
    else
        cout<<"NONE"<<endl;
    // return ;

}
int main()
{
    int o1, o2, o3, o4,t;
    struct point p1, p2, p3, p4;
    cin>>t;
    cout<<"INTERSECTING LINES  OUTPUT"<<endl;
    while(t--)
    {
        cin>>p1.x>>p1.y>>p2.x>>p2.y>>p3.x>>p3.y>>p4.x>>p4.y;
        o1= orientation(p1, p2, p3);
         o2= orientation(p1, p2, p4);
         o3= orientation(p3, p4, p1);
         o4= orientation(p3, p4, p2);
        if(o1!=o2 && o3!=o4)
        intersectPoint(p1,p2,p3,p4);
        else if(o1==0 && onSegment(p1, p3, p2))
            printf("line\n");
        else if(o2==0 && onSegment(p1, p4, p2))
            printf("line\n");
        else if(o3==0 && onSegment(p3, p1, p4))
            printf("line\n");
        else
            printf("none\n");*/

    }
    cout<<"END OF OUTPUT"<<endl;
}

