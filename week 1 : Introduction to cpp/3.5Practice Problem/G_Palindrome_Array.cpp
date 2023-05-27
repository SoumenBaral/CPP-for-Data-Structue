#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int ar[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    int i=0;
    int j= n-1;
    int flag=0;
    while (i<j)
    {
        if(ar[i] != ar[j]){
            flag=1;
            
        }
        ++i;
        --j;
    }
    if(flag==0)cout<<"YES";
    else cout<<"NO";

    
    
    return 0;
}