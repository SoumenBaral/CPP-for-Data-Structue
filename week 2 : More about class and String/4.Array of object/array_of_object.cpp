#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
     string Name;
     int Age;
     int height;

};
int main ()
{
    person a[3];
    for(int i=0;i<3;i++){
        getline(cin,a[i].Name);
        cin>>a[i].Age>>a[i].height;
        cin.ignore();
    }
   for(int i= 0;i<2; i++)
   {
         for(int j= i+1;j<3;j++ )
         {
           if(a[i].Age<a[j].Age)
           {
             swap(a[i],a[j]);
           }
         }
   }
    for(int i=0;i<3;i++){
       cout<<a[i].Name<<" "<<a[i].Age <<endl;
    }
    return 0;
}