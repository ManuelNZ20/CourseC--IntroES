/*3. Realice un program que lea de la entrada
estándar los siguientes datos de una persona:
Edad: dato de tipo entero.
Sexo: dato de tipo caracter.
Altura en metros: dato de tipo real.

Tras leer los datos, el programa debe mostrarlos
en salida estándar.
*/

#include<iostream>

using namespace std;

int main(){
	int age;
	char sex;//si se usa parentesis se define co caracteres a definir
	float altura;
	
	cout<<"You write date\nAge: ";
	cin>>age;
	cout<<"Sex: ";
	cin>>sex;
	cout<<"Altura: ";
	cin>>altura;
	
	cout<<"Date\nAge: "<<age<<endl;
	cout<<"Sex: "<<sex<<endl;
	cout<<"Altura: "<<altura<<endl;
	
	return 0;
}