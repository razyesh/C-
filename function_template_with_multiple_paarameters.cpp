#include<iostream>
using namespace std;
template <class raz, class yesh, class puda>
yesh nameage(raz a, yesh b, puda c)
{
    cout<<endl;
    cout<< "Your Name: "<<a<<endl;
    cout<< "Your Age: "<<b<<endl;
    cout<< "Your Address: "<<c<<endl;
}
int main()
{
    string a,c;
    int b;
    cout<< "Enter Your Name: ";
    cin>>a;
    cout<< "Enter Your Age: ";
    cin>>b;
    cout<< "Enter Your Location: ";
    cin>>c;
    nameage(a, b, c);
}
