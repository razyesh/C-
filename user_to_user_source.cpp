#include<iostream>
using namespace std;
class distance
{
private:
    int feet, inch;
public:
    distance()
    {
        feet = 0;
        inch =0;
    }
    distance(int f, int i)
    {
        feet = f;
        inch = i;
    }
   void display()
    {
        cout<< "feet: "<<feet;
        cout<< "Inch: "<<inch;
    }
};
class dist
{
private:
    int meter;
    int cm;
public:
    dist(int m, int c)
    {
        meter = m;
        cm = c;
    }
    operator distance()
    {
        distance d;
        int f, i;
        f = meter*83.3;
        i = cm *0.4;
        return distance(f, i);
    }
};
int main()
{
    distance d1;
    d1.show();
    dist d2(4, 3);
    d1= d2;
    d1.display();
}
