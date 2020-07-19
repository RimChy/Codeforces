 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int n,m,c;
     cin>>n;
     int a[n+1],arr[n+1];
     for(int i=0;i<n;i++){
        cin>>a[i];

     }
     arr[0]=a[0];
     for(int i=1;i<n;i++){
        arr[i]=arr[i-1]+a[i];
     }
     cin>>m;
     int b[n+1];
     for(int i=0;i<m;i++){
     cin>>b[i];
     if(b[i]<=a[0]) c=1;
     for(int j=1;j<n;j++){

         if(b[i]>a[j-1] && b[i]<a[j]) c=j+1;
     }
     cout<<c<<endl;
     }


 }
