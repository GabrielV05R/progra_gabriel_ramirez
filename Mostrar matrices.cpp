#include <iostream>
using namespace std;

int main(){
    int fila=3;
    int columna=3; 
    int matriz[fila][columna];

    for(int i = 0; i < fila; i++){
        for(int x=0; x<columna; x++){
            cout<<"Ingrese el dato en "<<i<<","<<x<<": ";
            cin>>matriz[i][x];
        }
    }
    // Mostrar la matriz
    cout << "Matriz:" << endl;
    for (int i=0; i<fila; i++) {
        for (int x=0; x<columna; x++) {
            cout<<matriz[i][x] <<" ";
        }
        cout<<endl;
    }

    return 0;
}
