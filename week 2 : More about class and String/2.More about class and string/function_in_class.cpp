#include<bits/stdc++.h>
using namespace std;
class person
{

    public:
        string name ;
        int age;
        int number1;
        int number2;


      person(string nm,int ag,int nm1,int nim2){
        name=nm;
        age=ag;
        number1=nm1;
        number2 = nim2;
      };
      void  ageEs(){
        cout<<age<<endl;
      }
      int totalMarks(){
        return number1+number2;
      }

};
int main ()
{
    person Rakib("Rakib Hassan",37,500,320);
    cout<<Rakib.name<<endl;
    Rakib.ageEs();
    int total = Rakib.totalMarks();
    cout<<total;


    return 0;
}