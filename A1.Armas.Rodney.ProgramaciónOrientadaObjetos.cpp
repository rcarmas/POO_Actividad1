#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
cout <<"Hola Mundo"<< endl;
  char mensaje[10000];
    cout<<"Ingrese mensaje que desea mostrar"<<endl;
    cin.getline(mensaje,40);
    cout<<"El mensaje es"<< endl;
    cout<<mensaje<< endl;
system ("Pause");
return 0;
}
