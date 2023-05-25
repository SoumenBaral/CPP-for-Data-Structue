#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c;
    char s,eq;
    cin>>a>>s>>b>>eq>>c;
    if (s== '+')
    {
        if(a+b==c)cout<<"Yes";
        else cout<<a+b;
    }
    else if(s=='-')
    {
        if(a-b==c)cout<<"Yes";
        else cout<<a-b;
    }
    else{
        if(a*b==c)cout<<"Yes";
        else cout<<a*b;
    }
    
    return 0;
}