#include<iostream>
using namespace std;
class object
{
private:
    string name;
    int age;
public:
    void get()
    {
        cout<< "Your Name: ";
        cin>> name;
        cout<< "Your Age: ";
        cin>>age;
    }

    void obj(object o)
    {
        cout<< "Hey "<<o.name<< " You are "<<o.age<< "  years of old";
    }

};
int main()
{
    object o1, o2;
    o1.get();
    o2.obj(o1);
}
