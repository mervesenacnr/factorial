#include <iostream>
using namespace std;
int factorial(int n) {
	// 1! = 1 
	if( n == 1){
		return 1;
	}
	
	else {
		// 4! = 4*3! , 3!= 3.2! . . .  n = n * factorial(n-1); 
		return n * factorial(n-1);
	}
}

int main(){
	int n;
	cout << "Pozitif say�y� giriniz: "<< endl;
	cin >> n ;
	cout << "Olu�an faktoriyel sonucu: " << factorial(n); 
}
