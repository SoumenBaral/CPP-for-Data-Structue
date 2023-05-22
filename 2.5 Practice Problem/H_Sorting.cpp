#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int tmp= array[0];
    for(int i = 0 ; i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(array[i]>=array[j])
            {
                tmp= array[i];
                array[i]=array[j];
                array[j]=tmp;

            }

        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    
    return 0;
}