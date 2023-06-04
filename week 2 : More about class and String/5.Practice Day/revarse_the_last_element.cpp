#include<bits/stdc++.h>
using namespace std;
class students
{
    public:
     string Nm;
     int cls;
     char s;
     int id;
     


};

int main ()
{
    int n;
    cin>>n;
    cin.ignore();
    students a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].Nm>>a[i].cls>>a[i].s>>a[i].id;
    }
    int x= n-1;
    for(int i=0;i<n;i++){
       cout<<a[i].Nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[x].id<<endl;
       x--;
    }
    return 0;
}