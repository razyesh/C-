#include<iostream>
using namespace std;
class ram
{
private:
    int b;
    static int a;
public:
    void display()
    {
        cout<< "Enter the value b: ";
        cin>>b>>a;
        cout<<b<<endl;
        cout<<a;
    }
};

int ram::a;
int main()
{
    ram s, e;
    s.display();
    e.display();
}
