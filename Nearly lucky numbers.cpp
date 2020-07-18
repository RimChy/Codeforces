#include<iostream>

using namespace std;
int main()
{
     int i;
     long long int a;
    int j=0;
    cin>>a;
    while(a != 0)
    {
        if(a % 10 == 4 || a%10 == 7)
        {
            j++;
        }
        a/=10;

    }
    if(j == 4 || j == 7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


}
