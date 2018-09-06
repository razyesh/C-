
#include<iostream>
using namespace std;
class operate
{
private:
    int a=1;
public:
    void operator -()
    {
        -a;
    }
    void show()
    {
        cout<< a;
    }
};
int main()
{
    operate o1;
    o1.show();
    -o1;
    o1.show();
    return 0;
}
