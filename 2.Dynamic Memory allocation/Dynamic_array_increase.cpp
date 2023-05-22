#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int* a =new int [5];
    for (int i = 0; i < 5; i++)
    {
        cin>>a[i];
    }
    int b[7];
    for(int i=0;i<7;i++)
    {
        b[i]=a[i];

    }   
    b[5]=29;
    b[6]=36;
    for(int i=0;i<7;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;

    //Delete array from the program ///
    delete[]a;
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    }
     
    return 0;
}