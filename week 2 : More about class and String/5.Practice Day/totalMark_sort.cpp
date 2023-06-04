#include<bits/stdc++.h>
using namespace std;
class students
{
    public:
     string Nm;
     int cls;
     char s;
     int id;
     int  math_marks;
     int eng_marks;


};
bool cmp(students a,students b)
{
    int ATotal =a.math_marks+a.eng_marks; 
    int bTotal = b.math_marks+b.eng_marks;
    if(ATotal>bTotal)return true;
    else if(ATotal==bTotal){
        if(a.id<b.id) return true;
        else return false;
    }

    else return false ;
};

int main ()
{
    int n;
    cin>>n;
    cin.ignore();
    students a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].Nm>>a[i].cls>>a[i].s>>a[i].id>>a[i].math_marks>>a[i].eng_marks;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
       cout<<a[i].Nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    }
    return 0;
}