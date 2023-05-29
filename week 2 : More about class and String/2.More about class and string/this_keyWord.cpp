#include<bits/stdc++.h>
using namespace std;
class Person 
{
    public:
    string name ;
    int age;
        Person(string name,int age)
        {
            this->name=name;
            this->age=age;
        }
};
int main ()
{
    Person soumen("soumen",25);
    cout<<soumen.name<< " "<<soumen.age<<endl;
    
    return 0;
}