#include<iostream>
using namespace std;
template <class cls>
class luck
{
private:
    cls a, b;
public:
    luck(cls c, cls d)
    {
        a=c;
        b=d;
    }
    cls largest()
    {
        return (a>b?a:b);
    }
};

int main()
{
    luck <int>l(12, 13);
    cout<<l.largest();
}
