#include<iostream>
using namespace std;
class product
{
private:
    string company;
    int price;
    string product_type;
public:
    product(string c, int p)
    {
        company = c;
        price=p;
    }
product(const product &p)
    {
        company = p.company;
        price = p.price;
        product_type = "Laptop";
    }
    void display()
    {
        cout<< "Company Name: "<<company<<endl;
        cout<< "Price: $"<<price<<endl;
        cout<< "Product Type: "<<product_type;
    }
};
int main()
{
    product p1("Apple", 1200), p3("Lenovo", 1400);
    p1.display();
    product p2(p1);
    p2.display();
    product p4(p3);
    p4.display();
}
