#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
     string Nm;
     int cls;
     char s;
     int id;


};
// bool cmp(person A,person B){
// if(A.Age<B.Age) return true;
// else return false;

// };
int main ()
{
    int n;
    cin>>n;
    // cin.ignore();
    person a[n];
    for(int i=0;i<n;i++){
        // getline(cin,a[i].Name);
        cin>>a[i].Nm;
        cin>>a[i].cls>>a[i].s>>a[i].id;
        // cin.ignore();
    }
//    My swap ....man
// sort(a,a+n,cmp);
    for(int i=n-1;i>=0;i--){
       cout<<a[i].Nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<endl;
    }
    return 0;
}
































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
        cin>>a[i].Nm;
        cin>>a[i].cls>>a[i].s>>a[i].id;
    }
    for(int i=n-1;i>=0;i--){
       cout<<a[i].Nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<endl;
    }
    return 0;
}