#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
     char name[100];
     int Roll;
     int cls;
     char section;

};

int main ()
{
    student soumen;
    char nm[100] ="Soumen Baral";
    strcpy(soumen.name,nm);
    soumen.Roll =191;
    soumen.cls =7;
    soumen.section='A';

     cout <<soumen.name<<endl;
   
    return 0;
}