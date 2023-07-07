#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
	string nombre[10];
	int nota[10];
	int m;
	int suma;
	int b=0;
int main(){
	 cout<<"Bienvenido al menu, elija una opcion"<<endl;
while (m != 5){

 cout<<"Opcion 1: Nombres y sus apellidos"<<endl;
 cout<<"Opcion 2: Calificaciones"<<endl;
 cout<<"Opcion 3: Ver calificaciones"<<endl;
 cout<<"Opcion 4: Promedio"<<endl;
 cout<<"Opcion 5: Salir"<<endl;
 cin>>m;



switch(m){
case 1:	cout<<"Por favor ingrese los nombres y apellidos"<<endl;
	for(int i=0; i<10; i++){
		
	 cin>>nombre[i];
	}
break;
case 2:	cout<<"Ingrese las notas"<<endl;
	
	for(int i=0; i<10; i++){
		
	 cin>>notas[i];
	}
break;	
case 3:	cout<<"El listado de nombres es: "<<endl;
	for(int j=0; j<10; j++){
	cout<<nombre[j]<<" "<<nota[j]<<endl;
	}
break;
case 4:	
	for(int i=0; i<10; i++){    
	suma+= b + nota[i];
	}  
    cout<<"El promedio es: "<<suma<<endl;
break;
}
}
}
