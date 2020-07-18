#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main ()
{
    int myints[] = {10,20,30,30,20,10,10,20,50,1,39,40};
    vector<int> v(myints,myints+12);
    sort (v.begin(), v.end());
    vector<int>::iterator low,up;
    low=lower_bound (v.begin(), v.end(), 20);
    up= upper_bound (v.begin(), v.end(), 30);

    cout<<"Total element in range [20,30]: "<<up-low<<endl;
    return 0;
}
