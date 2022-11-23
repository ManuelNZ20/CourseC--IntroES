/*1. Escribe un programa que lea de la entrada
estándar dos números y muestre en la salida
estándar su suma, resta, multiplicación y división.
*/

#include<iostream>

using namespace std;

int main(){
	int n1,n2,sum,rest,product,div;
	cout<<"1. Write a number: ";
	cin>>n1;
	cout<<"2. Write a number: ";
	cin>>n2;
	
	sum = n1 +n2;
	rest = n1 - n2;
	product = n1 * n2;
	div = n1 / n2;
	
	cout<<"The sum: "<<sum<<endl;
	cout<<"The rest: "<<rest<<endl;
	cout<<"The product: "<<product<<endl;
	cout<<"The division: "<<div<<endl;
	return 0;
}