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
  cout<<arif->name<<endl;
  cout<<arif->Roll<<endl;
  cout<<(*arif).cls<<endl;
  
  int* a = new int;
  *a=10;
  cout<<*a<<endl;


    return 0;
}