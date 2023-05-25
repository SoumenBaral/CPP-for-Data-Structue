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
    char name[100] = "Arifuzzaman Khan";
  student* arif = new student(name,150,13,'A');
  arif->Roll=30;
//   (*arif).Roll= 120;
// We can access the dynamic object by the using of 2 way.
// 1. is cout<<arif->Roll<<endl; like that ..
//2. is cout<<(*arif).cls<<endl;  like that..


  cout<<(*arif).name<<endl;
  cout <<(*arif).Roll<<endl;
  cout<<(*arif).cls<<endl;
  cout<<(*arif).section<<endl;

//   int* a = new int;
//   *a=10;
//   cout<<*a<<endl;
// array sign is we can only use when we deal with dynamic object ..
//  shortcut of (*arif).==arif->
    cout<<"============================================="<<endl;

    cout<<arif->name<<endl;
    cout<<arif->Roll<<endl;
    cout<<arif->cls<<endl;
    cout<<arif->section<<endl;

    delete arif;
    cout<<"============================================="<<endl;

    cout<<arif->name<<endl;
    cout<<arif->Roll<<endl;
    cout<<arif->cls<<endl;
    cout<<arif->section<<endl;


    return 0;
}