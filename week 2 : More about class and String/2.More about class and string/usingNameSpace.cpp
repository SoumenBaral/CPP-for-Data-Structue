#include<bits/stdc++.h>
using namespace std;
namespace soumen
{
    int age = 19;
        void fun()
        {
            cout<<"make fun man"<<endl;
        }
        //we ca take class here..thats cool baby ..

}
namespace shuvo
{
    int age2 = 29;
        void fun2()
        {
            cout<<"make fun man"<<endl;
        }
        //we ca take class here..thats cool baby ..
        
}
using namespace soumen;
int main ()
{
    cout<<age<<endl;
    cout<<shuvo::age2<<endl;
    return 0;
}