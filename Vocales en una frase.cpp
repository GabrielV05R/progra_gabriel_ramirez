#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
int contarv(const char* frase){
    int contar=0;
    int longitud=strlen(frase);

    for (int i=0;i<longitud;++i) {
        char caracter=tolower(frase[i]);

        if (caracter=='a'||caracter=='e'||caracter=='i'||caracter=='o'||caracter=='u'){
        ++contar;
        }
    }

    return contar;
}

int main(){
    char frase[36]; //usamos 1 más para almacenar hasta 35
    cout<<"Ingrese una frase de hasta 35 caracteres: ";
    cin.getline(frase,36);

    int cantidadv=contarv(frase);

    cout<<"La cantidad de vocales utilizadas es: "<<cantidadv<<endl;

    return 0;
}
