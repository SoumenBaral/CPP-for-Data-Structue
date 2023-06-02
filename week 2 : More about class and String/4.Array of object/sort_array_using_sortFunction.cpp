#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
     string Name;
     int Age;
     int height;

};
bool cmp(person A,person B){
if(A.Age<B.Age) return true;
else return false;

};
int main ()
{
    person a[3];
    for(int i=0;i<3;i++){
        getline(cin,a[i].Name);
        cin>>a[i].Age>>a[i].height;
        cin.ignore();
    }
//    My swap ....man
sort(a,a+3,cmp);
    for(int i=0;i<3;i++){
       cout<<a[i].Name<<" "<<a[i].Age <<endl;
    }
    return 0;
}