// <-------------------------------------------------------------------------->
// Given a string S
// . For each word in S
//  reverse its letters then print it.

// Note: words are separated by space.

// Input
// Only one line contains a strings S
//  (1≤|S|≤106)
//  where |S| is the length of the string and it consists of lowercase and uppercase English letters, spaces.

// Output
// Print the answer required above.

// Examples
// input
// I love you
// outputC
// I evol uoy

// <-------------------------------------------------------------------------->



#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    getline(cin,s);
    // stringstream ss(s);
    stringstream ss;
    ss<<s;
    string word;
    int count = 0 ;

    while (ss>>word)
    {
       
        
        
           cout<<word<<" ";
        
        
      
    }

    

    return 0;
}