/* Tipo de datos
/  Juan Manuel Morillo
/ 14-04-2015
*/

#include <iostream>

using namespace std;

int main() {

char nombre [15];
char apellido [15];
string nacimiento;
int dni, telcel;
string nacionalidad;
string mail;
char resp[2];

	
	cout<<"\n\t\t\t-- FORMULARIO DE INSCRIPCION RAPIDA --\n\n";
	cout<<"\n\t\Nombre: ";
	cin>>nombre;
	cout<<"\n\t\Apellido: ";
	cin>>apellido;
	cout<<"\n\t\Fecha de Nac. (DD/MM/AAAA): ";
	cin>>nacimiento;
	cout<<"\n\t\D.N.I.: ";
	cin>>dni;
	cout<<"\n\t\Nacionalidad: ";
	cin>>nacionalidad;
	cout<<"\n\t\Telefono/celular: ";
	cin>>telcel;
	cout<<"\n\t\Correo electronico: ";
	cin>>mail;
	cout<<"\n\t\¿Desea recibir novedades via mail? (Si/No): ";
	cin>>resp;
	cout<<"\n\n\n\t\t\tMuchas gracias por elegirnos.\n\n";
	
	return 0;
}
