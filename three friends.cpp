#include<iostream>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    long long int a,b,c,s=0;
   while(n--){
        scanf("%lld %lld %lld",&a,&b,&c);
        s=(abs(a-b)+abs(a-c)+abs(b-c))-4;

        if(s>0) printf("%lld\n",s);
        else printf("0\n");


    }
}
