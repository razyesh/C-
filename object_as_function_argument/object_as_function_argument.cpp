#include<iostream>
using namespace std;
class object
{
private:
    int x, y;
public:
    void get()
    {
        cout<< "Enter X: ";
        cin>>this->x;
        cout<< "Enter Y: ";
        cin>>this->y;
    }
    void show()
    {
        cout<< "Value of X: "<<x<<endl;
        cout<< "Value of Y: "<<y<<endl;
    }
    void add(object o1, object o2)
    {
        x=o1.x+o2.x;
        y=o1.y+o2.y;
    }
    object la_return_gar(object o1, object o2)
    {
        object o;
        o.x=o1.x-o2.x;
        o.y=o1.y-o2.y;
        return o;
    }
};
int main()
{
    object p1, p2,p3, p4, p5;
    p1.get();
    p2.get();
    cout<<endl;
    p3.add(p1,p2);
    p1.show();
    cout<<endl;
    p2.show();
    cout<<endl;
    p3.show();
    cout<<endl;
    p5 = p4.la_return_gar(p3, p1);
    p5.show();
}
