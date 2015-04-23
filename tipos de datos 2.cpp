/* Tipo de datos (mejorado)
/  Juan Manuel Morillo
/ 23-04-2015
*/

#include<iostream>

using namespace std;

int main(){
	
char suj1[10];
char suj2[10];
string relacion;
int edad1, edad2;
bool mayor=true;

cout<<"\nNombre del primer sujeto: ";
cin>>suj1;
cout<<"Edad del primer sujeto: ";
cin>>edad1;
cout<<"\nNombre del segundo sujeto: ";
cin>>suj2;
cout<<"Edad del segundo sujeto: ";
cin>>edad2;
cout<<"\nRelacion que los une: ";
cin>>relacion;

mayor=edad1>edad2;

cout<<"\nEntre estos/as dos "<<relacion<<", el primero es el/la mayor? ";

if(mayor==1)cout<<"Si, "<<suj1<<" es el/la mayor.";
else cout<<"No, "<<suj2<<" es el/la mayor";


cout<<"\n\n";

return 0;
	
}
