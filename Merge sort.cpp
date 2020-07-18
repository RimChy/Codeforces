#include<bits/stdc++.h>
using namespace std;
void mergemerge(int arr[],int brr[],int a,int m,int b,int k)
{
    if(k==1)
    {
        int x=a,y=m+1,p=a;
        while(x <= m && y<=b)
        {
            if(brr[x]<=brr[y])
            {
                arr[p]=brr[x];
                x++;
            }
            else
            {
                arr[p]=brr[y];
                y++;
            }
            p++;
        }
        while(x<=m)
        {
            arr[p++]=brr[x++];
        }
        while(y<=b)
        {
            arr[p++]=brr[y++];
        }

    }
    else
    {
        int x=a,y=m+1,p=a;
        while(x<=m && y<=b)
        {
            if(arr[x]<=arr[y])
            {
                brr[p]=arr[x];
                x++;
            }
            else
            {
                brr[p]=arr[y];
                y++;
            }
            p++;
        }
        while(x<=m)
        {
            brr[p++]=arr[x++];
        }
        while(y<=b)
        {
            brr[p++]=arr[y++];
        }
    }

}
void mergesort(int arr[],int brr[],int a,int b,int k)
{
    if(a<b){

    int m=a+(b-a)/2;
    if(k==1){
        mergesort(arr,brr,a,m,0);
        mergesort(arr,brr,m+1,b,0);
    }
    else{
        mergesort(arr,brr,a,m,1);
        mergesort(arr,brr,m+1,b,1);
    }
    if(k){
        mergemerge(arr,brr,a,m,b,1);
    }
    else{
        mergemerge(arr,brr,a,m,b,0);
    }
    }
}
int main()
{
    puts("How many numbers:");
    int n,x;
    cin>>n;
    printf("\nInsert your %d numbers:\n",n);
    int arr[n+1],brr[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>x;
        arr[i]=x;
        brr[i]=x;
    }

    mergesort(arr,brr,0,n-1,1);

    puts("\nNumbers after Sorting:");
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}




