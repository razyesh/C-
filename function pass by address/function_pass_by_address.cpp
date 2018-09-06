#include<iostream>
using namespace std;
class fucntion_address
{
private:
    int x, y;
public:
    void address(int *x, int *y)
    {
        int *sum;
        sum = &x + &y;
        cout<< "Sum of two number is: "<<*sum;
    }
    void add(int *x, int *y)
    {
        int *difference;
        difference = &x - &y;
        cout << "The difference of Two number is: "<<difference;
    }
};
int main()
{
    int x, y;
    cout<< "Enter the value of X and Y ";
    cin>> x>>y;
    function_address a1, a2;
    a1.address(&x,&y);
    a2.add(&x, &y);
    return 0;

}
