#include<bits/stdc++.h>
using namespace std;
int* fun (int n)
{
   
    int* ar=new int[n];    
    for(int i=0; i<n;i++)
    {
        cin>>ar[i];
    
    }
    return ar;
}

int main ()
{
     int n ;
    cin>>n;
    int* a = fun(n);
   
    for (int i = 0; i <n; i++)
    {
         cout<<a[i]<<" ";
    }
    
    return 0;
}