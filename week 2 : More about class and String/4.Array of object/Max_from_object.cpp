#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
     string Name;
     int Age;
     int height;


        // person(string Name ,int Age,int height){
        //     this->Name=Name;
        //     this->Age=Age;           //Constructor nbio na..Array of object ar joinno............
        //     this->height=height;
        // }
};
int main ()
{
    person a[3];
  
        for(int i=0;i<3;i++){
            getline(cin,a[i].Name);
            cin>>a[i].Age>>a[i].height;
            cin.ignore();
        }
        person mx;
        mx.Age= INT_MIN;
        for(int i=0;i<3;i++)
        {
            if(mx.Age<a[i].Age)
            {
                mx=a[i];

            }
        }
        cout<<mx.Name<<" "<<mx.Age<<endl;

        person min;
        min.Age=INT_MAX;
        for (int i = 0; i < 3; i++)
        {
            if(min.Age>a[i].Age)
            {
                min= a[i];
            }
        }
         cout<<min.Name<<" "<<min.Age<<endl;

    return 0;
}