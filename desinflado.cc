#include <iostream>
using namespace std;

int main(){
	int numero(0);
	char variable;
	cin >> variable;
	if (variable < 97){
	numero = int(variable)+32;
	cout << char(numero) << endl;
	}

	else{
	numero = int(variable)-32;
	cout << char(numero) << endl;
	}
}	
