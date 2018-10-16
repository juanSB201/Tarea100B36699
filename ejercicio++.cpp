#include <iostream>
#include <sys/resource.h>
#include <math.h>
#include <cmath>
#include <string.h>
#include "indice++.h"
using namespace std;

void menuPrincipal() {
    bool bandera = false;

    char opcion;
    int cantidad;
    char comando[100];
    char nombre[100];
    int n;
    int pid;



    do {
        cin.clear();

        cout << "Seleccione una opción: " << endl;
        cout << "1- Convertir números binarios a decimales: " << endl;
        cout << "2- Convertir números octales a decimales:" << endl;
        cout << "3- Convertir números hexadecimales a decimales:" << endl;
        cout << "4- Salir" << endl << endl;


        cin >> opcion;
        switch (opcion) {
            case '1':
                cout << "\nIngrese el numero binario a convertir: ";
                cin>> n;
                if(comprueba(n,2)==false){
                    menuPrincipal();
                }
                cout << "El número en decimal es: " + intToString(convertidorBO(2, n)) << endl;
                break;
            case '2':
                cout << "\nIngrese el numero octal a convertir: ";
                cin>> n;
                if(comprueba(n,8)==false){
                    menuPrincipal();
                }
                cout << "El número en decimal es: " + intToString(convertidorBO(8, n)) << endl;
                break;
            case '3':
                cout << "El número hexadecimal en decimal es: " + intToString(convertidorH()) << endl;
                break;
            case '4':
                bandera = true;
                break;

            default:
                cout << "Opcion no valida.\a\n";
                break;

        }

    } while (bandera != true);
}

int convertidorBO(int base, int n) {
    int cont = 0;
    int sumador = 0;
    int sumaAux = 0;

    while (n > 0) {
        int aux = (n % 10);
        int aux2 = pow(base, cont);
        sumador += (aux * (pow(base, cont)));
        sumaAux = (aux * (pow(base, cont)));
        cout << intToString(aux) + "x" + intToString(base) + "^" + intToString(cont) + "=" + intToString(sumaAux) << endl;
        cont++;
        n = n / 10;
    }
    return sumador;
}

int convertidorH() {
    int dig, sumatoria = 0;
    int cont = 0;
    int sumaAux = 0;
    char numero[4];
    cout << "Ingrese el número hexadecimal a convertir: ";
    cin>> numero;
    if(compruebaH(numero)){
    for (int i = 3; i >= 0; i--) {
        dig = 0;
        char aux = numero[i];

        if (aux == '0') {
            dig = 0;
            sumaAux = (dig * (pow(16, cont)));
            cout << intToString(dig) + "x16^" + intToString(cont) + "=" + intToString(sumaAux) << endl;
            sumatoria += sumaAux;
            cont++;
        } else if (aux == '1') {
            dig = 1;
            sumatoria += (dig * (pow(16, cont)));
            sumaAux = (dig * (pow(16, cont)));
            cout << intToString(dig) + "x16^" + intToString(cont) + "=" + intToString(sumaAux) << endl;
            cont++;
        } else if (aux == '2') {
            dig = 2;
            sumatoria += (dig * (pow(16, cont)));
            sumaAux = (dig * (pow(16, cont)));
            cout << intToString(dig) + "x16^" + intToString(cont) + "=" + intToString(sumaAux) << endl;
            cont++;
        } else if (aux == '3') {
            dig = 3;
            sumatoria += (dig * (pow(16, cont)));
            sumaAux = (dig * (pow(16, cont)));
            cout << intToString(dig) + "x16^" + intToString(cont) + "=" + intToString(sumaAux) << endl;
            cont++;
        } else if (aux == '4') {
            dig = 4;
            sumatoria += (dig * (pow(16, cont)));
            sumaAux = (dig * (pow(16, cont)));
            cout << intToString(dig) + "x16^" + intToString(cont) + "=" + intToString(sumaAux) << endl;
            cont++;
        } else if (aux == '5') {
            dig = 5;
            sumatoria += (dig * (pow(16, cont)));
            sumaAux = (dig * (pow(16, cont)));
            cout << intToString(dig) + "x16^" + intToString(cont) + "=" + intToString(sumaAux) << endl;
            cont++;
        } else if (aux == '6') {
            dig = 6;
            sumatoria += (dig * (pow(16, cont)));
            sumaAux = (dig * (pow(16, cont)));
            cout << intToString(dig) + "x16^" + intToString(cont) + "=" + intToString(sumaAux) << endl;
            cont++;
        } else if (aux == '7') {
            dig = 7;
            sumatoria += (dig * (pow(16, cont)));
            sumaAux = (dig * (pow(16, cont)));
            cout << intToString(dig) + "x16^" + intToString(cont) + "=" + intToString(sumaAux) << endl;
            cont++;
        } else if (aux == '8') {
            dig = 8;
            sumatoria += (dig * (pow(16, cont)));
            sumaAux = (dig * (pow(16, cont)));
            cout << intToString(dig) + "x16^" + intToString(cont) + "=" + intToString(sumaAux) << endl;
            cont++;
        } else if (aux == '9') {
            dig = 9;
            sumatoria += (dig * (pow(16, cont)));
            sumaAux = (dig * (pow(16, cont)));
            cout << intToString(dig) + "x16^" + intToString(cont) + "=" + intToString(sumaAux) << endl;
            cont++;
        } else if (aux == 'A') {
            dig = 10;
            sumatoria += (dig * (pow(16, cont)));
            sumaAux = (dig * (pow(16, cont)));
            cout << intToString(dig) + "x16^" + intToString(cont) + "=" + intToString(sumaAux) << endl;
            cont++;
        } else if (aux == 'B') {
            dig = 11;
            sumatoria += (dig * (pow(16, cont)));
            sumaAux = (dig * (pow(16, cont)));
            cout << intToString(dig) + "x16^" + intToString(cont) + "=" + intToString(sumaAux) << endl;
            cont++;
        } else if (aux == 'C') {
            dig = 12;
            sumatoria += (dig * (pow(16, cont)));
            sumaAux = (dig * (pow(16, cont)));
            cout << intToString(dig) + "x16^" + intToString(cont) + "=" + intToString(sumaAux) << endl;
            cont++;
        } else if (aux == 'D') {
            dig = 13;
            sumatoria += (dig * (pow(16, cont)));
            sumaAux = (dig * (pow(16, cont)));
            cout << intToString(dig) + "x16^" + intToString(cont) + "=" + intToString(sumaAux) << endl;
            cont++;
        } else if (aux == 'E') {
            dig = 14;
            sumatoria += (dig * (pow(16, cont)));
            sumaAux = (dig * (pow(16, cont)));
            cout << intToString(dig) + "x16^" + intToString(cont) + "=" + intToString(sumaAux) << endl;
            cont++;
        } else if (aux == 'F') {
            dig = 15;
            sumatoria += (dig * (pow(16, cont)));
            sumaAux = (dig * (pow(16, cont)));
            cout << intToString(dig) + "x16^" + intToString(cont) + "=" + intToString(sumaAux) << endl;
            cont++;
        }
    }
    } else{
        cout <<"Número inválido" << endl;
        convertidorH();
    }
    return sumatoria;
}

string intToString(int n) {
    std::string cadena = "";

    cadena = std::to_string(n);
    return cadena;
}

bool comprueba(int numero, int base) {
    bool flag = true;
    bool candado = true;
    while (candado == true && numero>=base) {
        int aux = (numero % 10);
        //cout << intToString(aux) + "       ";
        if (aux < base) {
            numero = numero / 10;

        } else {
            cout << "Número inválido" << endl;
            flag = false;
            candado = false;
        }
    }


    return flag;
}

bool compruebaH(char num[]) {
    bool flag = true;
    bool candado = true;
    
    for(int i=0; i<4; i++){
        if(num[i]=='0'||num[i]=='1'||num[i]=='2'||num[i]=='3'||num[i]=='4'||num[i]=='5'||num[i]=='6'||num[i]=='7'||num[i]=='8'||num[i]=='9'||num[i]=='A'||num[i]=='B'||num[i]=='C'||num[i]=='D'||num[i]=='E'||num[i]=='F'){
            
        }else{
            flag=false;
        }
    }

    return flag;
}


