#include<iostream>
using namespace std;
class convert
{
private:
    int cm, m;
public:
    convert(int p)
    {
        cm = p;
    }
    convert(float m)
    {
        cm = int(m);
        cout<< "CM: "<<cm;
    }
};
int main()
{
    float f=2.5;
    convert c(f);

}

