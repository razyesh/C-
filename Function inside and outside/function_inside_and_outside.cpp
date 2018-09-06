#include<iostream>
using namespace std;
class func
{
private:
    int x, y;
public:
    void inside()
    {
        cout<<"Enter X: ";
        cin>>this->x;
        cout<< "Enter Y: ";
        cin>>this->y;
    }
    void outside();
};
void func::outside()
{
    cout<< "X: "<<x;
    cout<<endl;
    cout<< "Y: "<<y;
}
int main()
{
    func f1, f2, f3;
    f1.inside();
    f2.inside();
    f3.inside();
    f1.outside();
    cout<<endl;
    cout<<endl;
    f2.outside();
    cout<<endl;
    cout<<endl;
    f3.outside();
}
