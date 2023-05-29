#include<bits/stdc++.h>
using namespace std;
class person 
{
    public:
        string name;
        int age;
        
        person(string name , int age)
        {
            this->name=name;
            this->age=age;
        }
};
int main ()
{
    person* shakib = new person("Shakib Khan",24);
    person* Rakib =new person("Rakib khan",32);
    // Rakib = shakib; delete dile sob ses;
    *Rakib =*shakib;

    delete shakib;
    cout<<Rakib->name<<" "<<Rakib->age<<endl;


    return 0;
}