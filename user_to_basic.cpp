#include<iostream>
using namespace std;
class convert
{
private:
    int feet, inch;
public:
    convert(int f, int i)
    {
        feet = f;
        inch =i;
    }
    operator float()
    {
        float a;
        a= feet + inch/12.0;
        return a;
    }
};
int main()
{
    convert c (1,2);
    float x= (float)c;
    cout<< "X= "<<x;
}
