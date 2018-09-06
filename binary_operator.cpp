#include<iostream>
using namespace std;
class binary
{
private:
    int a, b;
public:
    void get()
    {
        cout<< "Enter a and b: ";
        cin>>a;
        cin>>b;
    }
    binary operator +(binary b2)
    {
        binary b1;
        b1.a = a + b2.a;
        b1.b = b + b2.b;
        return b1;
    }
    void display()
    {
        cout<<endl;
        cout<< "A: "<<a<<endl;
        cout<< "B: "<<b;
    }
};
int main()
{
    binary b1, b2, b3;
    b1.get();
    b2.get();
    b3= b1+b2;
    b1.display();
    b2.display();
    b3.display();
}
