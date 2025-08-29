#include <iostream>
using namespace std;

class Student {
    int rollNo;
    string name;
    double fees;
    public:
    Student()
    {
        cout<<"Enter roll number: ";
        cin>>rollNo;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter fees: ";
        cin>>fees;
    }
};
int main()
{
    Student s1;
    return 0;
}