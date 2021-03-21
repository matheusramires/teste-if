#include <iostream>

using std::cout;
using std::cin;
using std::endl;

main(){
	int a, b;
	
	cout << "digite um numero: ";
	cin >> a; 
	
	cout << "digite outro numero: ";
	cin >> b;
	
	if (a > b){
		cout << a << " eh maior que " << b<< endl;
	
	}else if (a < b){
		cout << a << " eh menor que " << b<< endl;
	}else{
		cout << a << " eh igual a " << b<< endl;
	}
}
