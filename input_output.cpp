#include<iostream>
using namespace std;
#include<fstream>
int main()
{
    string str;
    int age;
    ofstream ofile("student.txt");
    cout<< "Enter Your Name: ";
    cin>>str;
    cout<< "Enter your Age: ";
    cin>>age;
    ofile<<str<<endl;
    ofile<<age<<endl;
    ofile.close();
    ifstream ifile("student.txt");
    ifile>>str;
    ifile>>age;
    cout<< str<<" " <<age;
    return 0;
}
