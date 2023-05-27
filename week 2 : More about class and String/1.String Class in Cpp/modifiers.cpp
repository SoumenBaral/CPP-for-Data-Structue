#include<bits/stdc++.h>
using namespace std;
int main ()
{
    //append another string.
    string a = "Hello ";
    string b = " World";
    a+=b;
    cout<<a<<endl;
    a.append(b);//it works like a=a+b;
    cout<<a<<endl;

    // add character to the last of the string.
    a.push_back('A');
    cout<<a<<endl;

    // remove the last character of the string.
    b.pop_back();
    cout<<b<<endl;

    // assign string.
    string s ="HelloWorld";
    // s="GalloWorld";
    // s.assign("GalloWorld");
    cout<<s<<endl;

    // s.erase(5,2);
    cout<<s<<endl;

    // s.replace(4,3,"sow");
    cout<<s<<endl;

    //insert a portion to a specific position.
    s.insert(5,"soumen");
    cout<<s<<endl;

    



    
    //

    return 0;
}