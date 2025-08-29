//Yadnesh Nikam
//24070123134

#include <iostream>
using namespace std;
int Car_no=0;
class Car{
   public:
   Car(){
       Car_no++;
       cout << "Car object created: " << Car_no << endl;
   }
   ~Car(){
       Car_no--;
       cout << "Car object destroyed: " << Car_no << endl;
   }
};
int main(){
    Car car1;
    Car car2;
    Car car3;

    return 0;
}/*Car object created: 1
Car object created: 2
Car object created: 3
Car object destroyed: 2
Car object destroyed: 1
Car object destroyed: 0*/