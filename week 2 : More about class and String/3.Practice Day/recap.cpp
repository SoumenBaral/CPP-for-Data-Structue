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
void reverseWord(stringstream &ss){
    string word;
    if(ss>>word){
        reverseWord(ss);//last --------------> first 
        cout<<word<<endl;
        // reverseWord(ss);//index 0----------->last 
    }


}
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
using namespace soumen;

int main ()
{
    //!.resize ar Matter......
    // string sRsz;
    // cin>>sRsz;
    // sRsz.resize(11);//we can increase the the size via resize ..if we take more size then the original size then we have to give a char the char will fullfil the place otherwise we will got garbage value .
    // sRsz.resize(15,'X');
    // cout<<sRsz<<endl;
    // cout <<sRsz.size()<<endl;

    //!. Iterator fact......

    // string s; 
    // cin>>s;
    // string::iterator it;//if I don't have c++ 20 then we have to use it 
    // for(auto it=s.begin(); it<s.end(); it++)//we can use auto i have c++ 20;
    // {
    //     // cout<<*it<<endl;
    // }


    //StringStream ::::::::::>
    // string sr; 
    // getline(cin,sr);
    // stringstream ss (sr);
    // string word ;
    // while (ss>>word)
    // {
    //     cout<<word<<endl;
    // }
    // reverseWord(ss);
    
    //last element of a string .
    //  cout<<(sr.back())<<endl;


//some modifiers........
    //    string s; 
    //    getline(cin,s);
    //  s.erase(5,2);
    // cout<<s<<endl;

    // s.replace(6,0," snow is white ");
    // cout<<s<<endl;

    //insert a portion to a specific position.
    // s.insert(7,"soumen ");
    // cout<<s<<endl;


    // <------------------------------------>
    //  Dynamic Object copy;
    // <------------------------------------->

    // person *soumen = new person("soumen Baral",24);
    // person *shuvo = new person("shuvo baral",30);
    // shuvo = soumen;
    // //  delete soumen;
    // cout<<shuvo->name<<endl;
    // delete soumen;
    // cout<<shuvo->age<<endl;

    //ranged  based for loop 
    // for(char c:s)
    // {
    //     cout<<c<<endl;
    // }
    //string constructor 
    // string x("That was her fault",4);
    // string a ="Is it good man";
    // string c(a,4); // we will get the value after 4 index here;
    // cout<<c<<endl;
    // cout<<x<<endl;
    // string sx (26,'x');
    // cout<<sx<<endl;

    string sb;
    // cin >>sb;
    sort(sb.begin(),sb.end());
    // cout<<sb;
    fun();
    return 0;
}