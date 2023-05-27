#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
   
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int ar[n];
        int min = INT_MAX;
        for (int  j = 0; j < n; j++)
        {
            cin>>ar[j];
        }
        for (int  j = 0; j < n; j++)
        {
            for(int k=j+1 ; k<n;k++)
            {
                int sum = ar[j]+ar[k]+k-j;
                if(min>sum)
                {
                    min=sum;
                }
            }
        }
        cout<<min<<endl;
    }
     
    return 0;
}

