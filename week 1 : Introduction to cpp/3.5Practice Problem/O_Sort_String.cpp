// #include<bits/stdc++.h>
// using namespace std;
// int main ()
// {
//     int n;
//     cin>>n;
//     char str[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>str[i];
//     }
//     int tmp =str[0];
//      for (int i = 0; i < n; i++)
//     {
//       for(int j=i+1; j<n;j++)
//       {
//         if (str[i]>str[j])
//         {
//             tmp=str[i];
//             str[i]=str[j];
//             str[j]=tmp;
//         }
        
//       }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<str[i];
//     }
    
//     return 0;
// }

//Copied code is for codeForces... 

//now I writing the this code using sort function;


#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    char s[n];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    //Ascending Order small to --------------Big;
    sort(s,s+n);
    for (int i = 0; i < n; i++)
    {
        cout<<s[i];
    }

    // sort(s,s+n,greater<>());
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<s[i];
    // }
    return 0;
}































