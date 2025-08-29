//Yadnesh Nikam
//24070123134
#include <iostream>
using namespace std;
class Bank{
    string accHolderName;
    int accNo;
    double balance;
    public:
    Bank();
    void displayInfo();
};


Bank::Bank() {
    cout << "Enter account holder name: ";
    cin >> accHolderName;
    cout << "Enter account number: ";
    cin >> accNo;
    cout << "Enter initial balance: ";
    cin >> balance;
}

void Bank::displayInfo() {
    cout << "Account Holder Name: " << accHolderName << endl;
    cout << "Account Number: " << accNo << endl;
    cout << "Balance: " << balance << endl;
}
int main() {
    Bank b1;
    b1.displayInfo();
    return 0;
}
/*Enter account holder name: Yadnesh
Enter account number: 123123
Enter initial balance: 0
Account Holder Name: Yadnesh
Account Number: 123123
Balance: 0*/