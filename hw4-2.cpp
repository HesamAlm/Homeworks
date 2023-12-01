#include <iostream>
using namespace std;


int main() {
int numerator;
int denominator;
int x,y,z;
cout << "enter your value for x :";
cin >> x ;
cout<< "enter your value for y: ";
cin >> y ;
cout<<"enter your value for z: ";
cin>>z;
numerator = (x-y) * (x+z);
denominator = (x+y+z)*(x+y+z)+1;
cout << "The result:" <<(float) numerator/denominator;

	
	
}