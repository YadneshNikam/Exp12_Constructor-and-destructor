//Yadnesh Nikam
//24070123134
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
     void displayInfo() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Fees: " << fees << endl;
    }
};

int main()
{
    Student s1;
    s1.displayInfo();
    return 0;
}

/*Enter roll number: 134
Enter name: Yadnesh
Enter fees: 300000
Roll Number: 134
Name: Yadnesh
Fees: 300000

*/