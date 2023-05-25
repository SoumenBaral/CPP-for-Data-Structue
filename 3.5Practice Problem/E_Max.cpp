#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int ar[n];
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<5;i++)
    {
     if(max<ar[i])
     {
        max=ar[i];
     }  
    }
    cout<<max;
    return 0;
}