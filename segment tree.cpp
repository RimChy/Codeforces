#include<bits/stdc++.h>
using namespace std;
#define mx 100001
int arr[mx],brr[mx];
int tree[mx * 3],tre[mx*3];
void init( int node, int b, int e)
{
    if (b == e) {
        tree[node] = arr[b];

        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(arr,Left, b, mid);
    init(arr,Right, mid + 1, e);
    tree[node] = tree[Left] + tree[Right];

}
int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return 0; //বাইরে চলে গিয়েছে
    if (b >= i && e <= j)
        return tree[node]; //রিলেভেন্ট সেগমেন্ট
    int Left = node * 2; //আরো ভাঙতে হবে
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return p1 + p2; //বাম এবং ডান পাশের যোগফল
}

int main(){
    int n;
    cin>>n;
 int arr[n+1],brr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    init(1,1,n);
    cin>>t;
    while(t--){
        cin>>l>>r;


            cout<<query(1,1,n,l,r)<<endl;

    }

}
