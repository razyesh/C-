#include<iostream>
using namespace std;
class operate
{
private:
    int length, breadth;
public:
    void rectangle(int a, int b)
    {
        length =a ;
        breadth = b;
    }
     void operator ++()
    {
        ++length;
        ++breadth;
    }
    void operator -()
    {
        length = -length;
        breadth = -breadth;
    }
    void operator ++(int)
    {
        length++;
        breadth++;
    }

    void show()
    {
        cout<< "Length: "<<length;
        cout<< "Breadth: "<<breadth;
    }
};
int main()
{
    operate o1;
    o1.rectangle(5,6);
    o1.show();
    ++o1;
    -o1;
    o1++;
    o1.show();
}
