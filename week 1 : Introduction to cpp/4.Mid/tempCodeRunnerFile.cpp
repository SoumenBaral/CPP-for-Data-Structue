#include<bits/stdc++.h>
using namespace std;
class Person
{
   public:
   char Name[100];
   int age;
   float height;


    Person(char* nm,int a,float h )
   {
       strcpy(Name,nm);
       age = a;
       height =h;       
   };
};
int main ()
{
   char name[100]="Soumen";
  Person* soumen= new Person(name,24,179.90);
  char Pnm [100]= "Pallob";
  Person* Pallob= new Person(Pnm,30,109.90);
   if (soumen->age>Pallob->age)
   {
        cout<<soumen->Name;
   }
   else
   {
       cout<<Pallob->Name;
   }
   return 0;
}

