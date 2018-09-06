#include<iostream>
using namespace std;
template <class razyesh>
razyesh divide(razyesh a, razyesh b)
{
    razyesh z;
    z= a/b;
    cout<< "Z: "<<z;
}
int main()
{
    double a=3, b=2, c;
    divide(a,b);
    return 0;
}

