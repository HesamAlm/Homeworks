#include <iostream>
using namespace std;


int main() {
int salary;
cout << "please enter your salary: ";
cin >> salary;
if (salary < 6000000){
cout << "net salary: " << salary;
}
else if (salary>=6000000 && salary<8000000){
cout << "net salary: " << salary- (salary*5/100);
}	
else if (salary>=8000000 && salary<10000000){
cout << "net salary: " << salary - (salary*10/100);
}
else if (salary>=10000000 && salary<14000000){
cout << "net salary: " << salary - (salary*15/100);
}
else if (salary>=14000000 && salary<18000000){
cout << "net salary: " << salary - (salary*20/100);
}
else if (salary>=18000000 && salary<25000000){
cout << "net salary: " << salary - (salary*25/100);
}
else if (salary>25000000){
cout << "net salary: " << salary - (salary*35/100);
}
}