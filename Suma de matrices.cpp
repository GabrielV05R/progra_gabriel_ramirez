#include <iostream>

using namespace std;

int main(){
	
    int fila=4;
    int columna=4; 
    int matriz[fila][columna];

    for(int i = 0; i < fila; i++){
        for(int x=0; x<columna; x++){
            cout<<"Ingrese el dato en "<<i<<","<<x<<": ";
            cin>>matriz[i][x];
        }
    }
    // Mostrar la matriz
    cout<<"Matriz:"<<endl;
    for (int i=0; i<fila; i++) {
        for (int x=0; x<columna; x++) {
            cout<<matriz[i][x] <<" ";
        }
        cout<<endl;
    }
 cout<<"Suma de cada fila:"<<endl;
    for(int i=0; i<fila; i++){
        int sumaFila=0;
        for (int x=0; x<columna; x++){
            sumaFila+=matriz[i][x];
        }
        cout<< "Fila "<<i<<": "<<sumaFila<<endl;
    }
    // Calcular y mostrar la suma de cada columna
    cout<<"Suma de cada columna:"<<endl;
    for(int x=0; x<columna; x++){
        int sumaColumna=0;
        for(int i=0; i<fila; i++){
            sumaColumna+=matriz[i][x];
        }
        cout<<"Columna "<<x<<": "<<sumaColumna<<endl;
    }

    return 0;
}
