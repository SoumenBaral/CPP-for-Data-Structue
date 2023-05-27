#include<bits/stdc++.h>
using namespace std;
int* fun(){
    int* ar= new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>ar[i];
    }
    
    return ar;
    
}
int main ()
{
    int *a=fun();
    for(int i=0; i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    delete[] a;
    //Pore a Onek Code thakle delete korbo naile dorkar nai code run hole sobi 
    //auto delete hoye jabe .
    return 0;
}