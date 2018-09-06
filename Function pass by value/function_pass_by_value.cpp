#include<iostream>
#include<conio.h>
using namespace std;
class function_value
{

private:
    int x, y;
public:
    void value(int a, int b)
    {
        int sum;
        sum = a+b;
        cout<< "Sum of two number is: "<< sum;
    }
};

int main()
{
    function_value f1, f2;
    int x, y;
    cout<< "Enter the value of X: and Y: ";
    cin>>x>>y;
    f1.value(x,y);
    cout<<endl;
    f2.value(x,y);
    return 0;

}
