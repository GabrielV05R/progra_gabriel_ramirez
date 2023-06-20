#include<iostream>
#include<conio.h>
#include<cstring>

using namespace std;

int main(){
    char nombres[50];

    for(int i=0; i<50; i++){
        cout<<"nombre: ";
        cin.getline(nombres,50,'\n');

        cout<<nombres<<endl;

        cout<<strlen(nombres)<<endl<<endl;
}  

return 0;

}
