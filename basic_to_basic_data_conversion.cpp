#include<iostream>
using namespace std;
class convert
{
private:
   int m;
public:
    convert(float p)
    {
        m = int(p);
    }
    void display()
    {
        cout<< "Converted m= "<<m;
    }
};
int main()
{
    float m=2.5;
    convert c1(m);
    c1.display();
}
