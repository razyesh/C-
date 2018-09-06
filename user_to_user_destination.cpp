#include<iostream>
using namespace std;
class distance
{
private:
    int meter;
    float cm;
public:
    distance(int m, int c)
    {
        meter = m;
        cm = c;
    }
    int getmeter()
    {
        return meter;
    }
    float getcm()
    {
        return cm;
    }
};
class dist
{
private:
    int feet;
    int inch;
public:
    dist()
    {
        feet = 0;
        inch = 0;
    }
    dist(int f, int i)
    {
        feet = f;
        inch = i;
    }
    dist(distance d)
    {
        int m, c;
        m = d.getmeter();
        c = d.getcm();
        feet = m*3.3;
        inch = c*0.4;
        feet = feet + inch/12;
        inch = inch%12;
    }
    void display()
    {
        cout<<feet;
        cout<<inch;
    }
};
int main()
{
    distance d1(6, 40);
    dist d2 = d1;
    d2.display();
}
