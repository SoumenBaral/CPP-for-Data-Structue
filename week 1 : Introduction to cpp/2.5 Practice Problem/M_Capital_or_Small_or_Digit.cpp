#include<bits/stdc++.h>
using namespace std;
int main ()
{
    char x;
    cin>>x;
    if (x>=97&&x<=122||x>=65&&x<=90)
    {
        cout<<"ALPHA"<<endl;
        if(x>=65&&x<=90){
           cout<<"IS CAPITAL"<<endl;
        }
        else{
            
             cout<<"IS SMALL"<<endl;
        }

    }
    else
    {
        cout<<"IS DIGIT"<<endl;
    }
    
    return 0;
}