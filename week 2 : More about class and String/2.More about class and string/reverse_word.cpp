#include<bits/stdc++.h>
using namespace std;
void reverse(stringstream &ss){
    string word;
    if(ss>>word){
        // cout<<word<<endl;//0-------
        reverse(ss);
         cout<<word<<endl;//max------->0? reverse 
    }
    
}
int main ()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    // string w;
    // while (ss>>w)
    // {
    //     cout<<w<<endl;
    // }
    reverse(ss);


    return 0;
}