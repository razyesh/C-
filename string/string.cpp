#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
int main()
{

    string name;
    cout<< "Enter Your Name: ";
    getline(cin, name);
    system("cls");
    cout<< "Your Name: "<<name;
    getch();
}
