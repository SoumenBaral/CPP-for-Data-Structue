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

    student shuvo;
    char nam[100]="Shuvo Baral";
    strcpy(shuvo.name,nam);
    shuvo.Roll=5;
    shuvo.cls = 7;
    shuvo.section ='B';

    student Potka ;
    char nax[100]="sourov";
    strcpy(Potka.name,nax);
    Potka.Roll=43;
    Potka.cls=5;
    Potka.section='A';
    cout <<Potka.name<<endl;
    cout<<shuvo.Roll;

    return 0;
}