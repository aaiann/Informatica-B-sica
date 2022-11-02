#include <iostream>

using namespace std;

int main(){
	int numero1(0);
	int numero2(0);
	cin >> numero1 >> numero2;
	int division(0);
	division = numero1 / numero2;
	int multi(0);
	multi = numero1*numero2;
	int suma(0);
	suma = numero1 + numero2;
	int resto(0);
	resto = numero1 % numero2;
	int resta(0);
	resta = numero1 - numero2;
	cout << numero1 << "+" << numero2 << "=" << " " << suma << endl;
	cout << numero1 << "-" << numero2 << "=" << " " << resta << endl;
	cout << numero1 << "*" << numero2 << "=" << " " << multi << endl;
	cout << numero1 << "/" << numero2 << "=" << " " << division << endl;
	cout << numero1 << "%" << numero2 << "=" << " " << resto << endl;

}
