#include<iostream>
using namespace std;
class convert
{
private:
    int a, b;
public:
    convert(int f, int i)
    {
        a = f;
        b=i;
    }
    operator float()
    {
        float c= a/b;
        cout<<c;
        return c;
    }
};
int main()
{
    convert c(5,2);
    float x = float(c);
    cout<<"x= "<<x;
}
