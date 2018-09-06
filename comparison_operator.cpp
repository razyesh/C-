#include<iostream>
using namespace std;
//comparison operator in c++
class compare
{
private:
    int a;
public:
    void get()
    {
        cout<< "Enter A: ";
        cin>>a;
    }
    int operator <(compare c1)
    {
        if (a > c1.a)
            return 1;
        else
            return 0;

    }
};
int main()
{
    compare c1, c2, c3;
    c1.get();
    c2.get();
    if (c1<c2)
        cout<< "C1 is bigger";
    else
        cout<< "c2 is bigger";
}
