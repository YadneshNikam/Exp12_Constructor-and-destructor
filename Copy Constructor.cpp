//Yadnesh Nikam
//24070123134

#include <iostream>
using namespace std;

class subjects {
    string sub1;
    string sub2;
    string sub3;
    public:
    subjects(string s1, string s2, string s3) {
        sub1 = s1;
        sub2 = s2;
        sub3 = s3;
    }
     void display() {
        cout << "Subject 1: " << sub1 << endl;
        cout << "Subject 2: " << sub2 << endl;
        cout << "Subject 3: " << sub3 << endl;
    }

    subjects(const subjects &a) {
        sub1 = a.sub1;
        sub2 = a.sub2;
        sub3 = a.sub3;
       
    }
   
};
int main() {
    subjects sub1("Math", "DSA", "VLSI");
    subjects sub2 = sub1;
    sub1.display();
    cout << "After copy constructor" << endl;
    sub2.display();
    return 0;
}
/*Output:
Subject 1: Math
Subject 2: DSA
Subject 3: VLSI
After copy constructor
Subject 1: Math
Subject 2: DSA
Subject 3: VLSI
*/