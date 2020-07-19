#include <bits/stdc++.h>

using namespace std;

/*void bubble_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
                swap(arr[j],arr[i]);
        }
    }
}*/
void insertion_sort(int arr[],int n)
{
    int tmp,j;
    for(int i=0;i<n;i++)
    {
        tmp = arr[i];
        j=i-1;
        while((j>-1) && (tmp < arr[j]))
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = tmp;
    }
}
void selection_sort(int arr[],int n)
{
    int mid;
    for(int i=0;i<n;i++)
    {
        mid = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[mid])
            {
                mid = j;
            }
        }
        swap(arr[i],arr[mid]);
    }
}


int main()
{
    int n,x;
    cin>>n;
    int arr[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertion_sort(arr,n);

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
