#include<iostream>
using namespace std;
class hi_inheritance
{
protected:
    int x, y;
};

class first_child: public hi_inheritance
{

public:
    inline void sum()
    {
        int sum;
        sum =x+y;
        cout <<"The sum of teo integer is: "<<sum;
    }
};
class secound_child: public hi_inheritance
{
public:


    inline void difference()
    {
        int difference;
        difference = x-y;
        cout << "The difference of two integer is "<<difference;
    }
};
int main()
{
    int x, y;
    cout<< "Enter X and Y ";
    cin>>x>>y;
    first_child H1;
    secound_child H2;
    H1.sum();
    cout<<endl;
    H2.difference();
    return 0;
}
