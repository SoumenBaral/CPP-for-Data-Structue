#include<iostream>
using namespace std;
int main ()
{
    int v;
    cin>>v;
    switch (v)
    {
    case 1 :
        cout<<"The input value was one"<<endl;
        break;
    case 2:
        cout<<"the input value was Two"<<endl;
        break;
    case 3:
        cout<<"The input value was Three"<<endl;
        break;
    case 4:
        cout<<"The input value was Four";
        break;
    case 5:
        cout<<"The input value was Five";
        break;    
    
    default:
        cout<<"NOt Match";
        break;
    }
    return 0;
}