#include<bits/stdc++.h>
using namespace std;
bool Range(long int low, long int x, long int high)
{
    if(low < high){
    return (low < x && x < high);
    }
    else{
        return (high<x && x< low);
    }


}



int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        long int x,y,a;
        cin>>x>>a>>y;
        Range(x,a,y)? cout<<"case #"<<i+1<<":"<<" Yeah!\n":cout <<"case #"<<i+1<<":"<<" Nah!!\n";

    }
}
