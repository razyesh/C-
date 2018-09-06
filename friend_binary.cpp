#include<iostream>
using namespace std;
class binary
{
private:
    int a,b;
public:
    void get()
    {
        cout<< "Enter A: ";
        cin>>a;
        cout<< "Enter B: ";
        cin>>b;
    }
    friend binary operator *(binary b1, binary b2);
    void show()
    {
        cout<<"A: "<<a<<endl;
        cout<< "B: "<<b<<endl;
    }
};
binary operator *(binary b1, binary b2)
{
    binary b3;
    b3.a = b1.a * b2.a;
    b3.b= b1.b * b2.b;
    return b3;
}

int main()
{
    binary b1, b2, b3;
    b1.get();
    b2.get();
    b3 = b1 * b2;
    b3.show();
    b1.show();
    b2.show();
    return 0;
}

