#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string str = "ami to vala na vala loia thaiko";
    cout<<str<<endl;
    cout<<str.size()<<endl;
    cout <<str.capacity()<<endl;
    str="check the capacity that increase automatically now I have to take some dummy text this dummy text was my dummy text ha ha ha ";
    cout<<str.capacity()<<endl;
    //clear the string
    string s = "Hello";
    cout<<s<<endl;
    s.clear();
    cout<<s;
    cout<<s.size()<<endl;
    //check is it empty it always return the bool value true or false 
    string sEmt ="some thing is in";
    sEmt.clear();
    if(sEmt.empty())cout<<"The string is empty"<<endl;
    else cout<<"The string is not empty"<<endl;

    //resize the string and take input without space 

    string sRsz;
    cin>>sRsz;
    sRsz.resize(15,'s');
    cout<<sRsz<<endl;
    cout <<sRsz.size()<<endl;



    return 0;
}