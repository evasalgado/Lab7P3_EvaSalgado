#include <iostream>
using namespace std;
int main(){//Inicio de programa
	int op = 0;
	do{
		cout << "--- Banco LCF---\n"<< //Menu
			"1. Crear Cuenta\n"<<
			"2. Realizar Deposito\n"<<
			"3. Realizar Retiro\n"<<
			"4. Mostrar Informacion de Cuenta\n"<<
			"5. Eliminar Cuenta\n"<<
			"6. Salir\n"<<
			"Selecciona una opcion:"<<endl;
		cin >> op;
		switch (op){
		case 1: //crear cuenta bancaria
			break;
		case 2: //realizar deposito a cuenta
			break;
		case 3: //realizar retiro de dinero
			break;
		case 4: //mostrar informacion de cuenta bancaria
			break;
		case 5:
			break; //eliminar cuenta bancaria
		case 6:
			cout << "Gracias por utilizar mi programa";//salir de programa
			break;
		default:
			cout << "Numero ingresado no es valido"<<endl; //numero ingresado no esta llamado en el switch
			break;
		}
	} while (op!=6); //fin del while
} // fin del programa
