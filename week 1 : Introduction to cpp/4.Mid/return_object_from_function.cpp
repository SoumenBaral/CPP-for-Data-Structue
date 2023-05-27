#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;

        Student(int r,int s,int c,char* n)
        {
            roll=r;
            section=s;
            cls=c;
            strcpy(name,n);
        }
};
Student fun()
{
    char name[100]="Bappa Raj";
    Student r(88,'A',12,name);
    return r;
}
int main()
{
    Student bappaRaj=fun();

    cout<<bappaRaj.name<<endl;
    cout<<bappaRaj.roll<<endl;
    cout<<bappaRaj.section<<endl;
    cout<<bappaRaj.cls<<endl;
    return 0;
}