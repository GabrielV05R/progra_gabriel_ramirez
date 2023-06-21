#include <iostream>
#include <string.h>

using namespace std;

string invertirFrase(const string & frase){
string invertir;
    for (int i = frase.length()-1;i>=0;--i){
        invertir+=frase[i];
    }
    return invertir;

 }
int main(){
string frase;
cout<<"Ingrese una frase: ";
getline(cin, frase);
string invertir=invertirFrase(frase);
cout<<"Frase invertida: "<<invertir<<endl;

    return 0;
}
