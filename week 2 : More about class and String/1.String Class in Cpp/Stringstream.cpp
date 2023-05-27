#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    getline(cin,s);
    cout<<s<<endl;
    // stringstream ss(s);
    stringstream ss;
    ss<<s;
    string word;
    // ss>>word;
    // cout<<word<<endl;
    // ss>>word;
    // cout<<word<<endl;
    // ss>>word;
    // cout<<word<<endl;
    // ss>>word;
    // cout<<word<<endl;
    // ss>>word;
    // cout<<word<<endl;
    //else we can do it with loop
    int  count =0;
    while (ss>>word)
    {
        cout<<word<<endl;
        count++;
    }

    cout<<count;
    

    return 0;
}