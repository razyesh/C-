#include<iostream>
using namespace std;
class op
{
private:
    int a, b;
    int are;
public:
    void get()
    {
        cout<< "Enter A: ";
        cin>>a;
        cout<< "Enter B: ";
        cin>>b;
    }
    void ar()
    {
        are = a *b;
        cout<< "Area: "<<are;
    }
    friend void operator ++(op &o1);
};
void operator ++( op &o1)
{
    ++o1.a;
    ++o1.b;

}
int main()
{
    op o1;
    o1.get();
    ++o1;
    o1.ar();
}
