//Yadnesh Nikam
//24070123134
#include <iostream>
using namespace std;

class Calculator {
    int num1;
    int num2;
    public:
    Calculator(int a, int b) {
        num1 = a;
        num2 = b;
    }
    void display() {
        cout << "Sum: " << num1 + num2 << endl;
        cout << "Difference: " << num1 - num2 << endl;
        cout << "Product: " << num1 * num2 << endl;
        cout << "Division: " << num1 / num2 << endl;
    }

};
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    Calculator calc(a, b);
    calc.display();
    return 0;
}/*Enter two numbers: 2 2
Sum: 4
Difference: 0
Product: 4
Division: 1
*/