#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int *pointer;
    int x;
    cout<< "Enter the value of X: ";
    cin>>x;
    pointer=&x;
    cout <<"Value from pointer: "<<pointer<<endl;
    cout <<"Value in X from pointer: "<<*pointer;
    getch();
}
