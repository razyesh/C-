#include<iostream>
using namespace std;
class height
{
private:
    float ft, cm;
public:
    void get()
    {
        cout<< "Input Your Height in ft: ";
        cin>>ft;
    }
    void show()
    {
        cout<<endl;
        cout<< "Your height in Feet: "<<ft<<endl;
        cout<< "Your height in CM: "<<cm;
    }
    height convert(height h)
    {
        height h1;
        h1.ft = h.ft;
        h1.cm = h.ft * 30.48;
        return h1;
    }
};
int main()
{
    height h1, h2,h3;
    h1.get();
    h3 = h2.convert(h1);
    h3.show();
}
