#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
     char name[100];
     int Roll;
     int cls;
     char section;

    student(const char nm[100],int R,int c, int s)
    {
        strcpy(name,nm);
        Roll=R;
        cls =c;
        section = s;
        // cout<<"constructor is now working";
    }


};

int main ()
{
    student soumen("Soumen Baral",150,13,'A');
    student shuvo("Shuvo Baral",151,133,'B');
    cout<<"Name : "<<soumen.name<<endl<<"Roll : "<<soumen.Roll<<endl<<"Class : "<<soumen.cls<<endl<<"section : "<<soumen.section<<endl;
    if(soumen.cls==shuvo.cls){
        cout<<"They are class mate"<<endl;

    }
    else {
        cout<<"The don't know each Other"<<endl;
    }
    

    return 0;
}