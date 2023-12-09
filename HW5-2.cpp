#include <iostream>
using namespace std;



int main() {
char character ;
cout << "Please enter a character: ";
cin >> character;
switch (character){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
cout << "vowel";
break;
default:
cout << "consonants";	
}
	
}