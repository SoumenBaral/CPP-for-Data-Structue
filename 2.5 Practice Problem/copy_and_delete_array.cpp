// Question: Take an integer array A of size N as input.
//  Then take an integer M as input. You need to take an 
//  array B of size M and copy all elements of array A to
//   array B. Delete the array A and then take input of the
//    rest of the elements of array B. After that print array B.

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m;
    cin>>n;
    int* a =new int [n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cin>>m;
    int b[m];
    for (int i = 0; i <m; i++)
    {
        cin>>b[i];
    }
    int tmp[m];
    for(int i=0;i<m;i++)
    {
        tmp[i]=b[i];
    }
    for (int i = 0; i <m-n; i++)
    {
        cout<<tmp[i]<<endl;
    }
    
    for (int i = 0; i < n; i++)
    {
      
        b[i]=a[i];
        
    }
    // b[3]=23;
    int x= 0;
    for (int i = n; i<m; i++)
    {
        b[i]=tmp[x];
        x++;
    }
    

    for (int i = 0; i < m; i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
     delete[]a;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    
    return 0;
}