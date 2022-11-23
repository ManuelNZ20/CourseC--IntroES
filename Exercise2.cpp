/*2. Escribe un programa que lea de la entrada
estándar el precio de un producto y muestre en la
salida estándar el precio del producto al 
aplicarle el IVA.
*/

#include<iostream>

using namespace std;

int main(){
	float product,IVA = 0.21f,total;
	cout<<"Write product: ";
	cin>>product;
	
	total = product + (product*IVA);
	
	cout<<"The product total: "<<total<<endl;
	return 0;
}