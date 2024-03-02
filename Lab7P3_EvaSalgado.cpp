#include <iostream>
#include "CuentaAhorro.h"
#include "CuentaCheque.h"
#include "Transaccion.h"
#include "BancoLCF.h"
#include <vector>
using namespace std;
BancoLCF* lcf = new BancoLCF();
void Agregar_Cheque(int nc, string n, double b) {
	double sg;
	cout << "Sobre giro: ";
	cin >> sg;
	CuentaBancaria* cc = new CuentaCheque(b, nc, n, sg);
	lcf->agregarCuenta(cc);
}
void Agregar_Ahorro(int nc,string n,double b) {
	double ti;
	cout << "Tasa de intereses: ";
	cin >> ti;
	CuentaBancaria* ca = new CuentaAhorro(b, nc, n, ti);
	lcf->agregarCuenta(ca);
}
void Agregar_Cuenta() {
	int op;
	int nc;
	string n;
	double b;
	cout << "Ingrese tipo de cuenta:\n"<<
		"1. Ahorro\n"<<
		"2. Cheque"<<endl;
	cin >> op;
	cout << "Numero de cuenta: ";
	cin >> nc;
	cout << "Nombre del propietario: ";
	cin >> n;
	cout << "Saldo incial: ";
	cin >> b;
	switch (op){
	case 1:
		Agregar_Ahorro( nc,n,b);
		break;
	case 2: 
		Agregar_Cheque(nc, n, b);
		break;
	default:
		cout << "Numero ingresado no es valido"<<endl;
		break;
	}
}
void Realizar_Deposito() {
	lcf->MostrarCuentas();
	int nc;
	string type = "";
	double monto = 0;
	cout << "Numero de cuenta para el deposito: " <<endl;
	cin >> nc;
	for ( int i = 0;i < lcf->getCuenta().size();i++){
		if (lcf->getCuenta()[i]->getNumCuenta() == nc) {
			CuentaBancaria* cb2 = lcf->getCuenta()[i];
			if (typeid(*cb2) == typeid(CuentaAhorro)) {
				cout << "Cantidad a depositar: "<<endl;
				cin >> monto;
				type = "Ahorro";
				Transaccion<CuentaAhorro> * t = new Transaccion<CuentaAhorro> (dynamic_cast<CuentaAhorro*>(cb2), monto, type);
				t->ejecutarTransaccion();
			}
			else if (typeid(*cb2) == typeid(CuentaCheque)) {
				cout << "Cantidad a depositar: " << endl;
				cin >> monto;
				type = "Cheque";
				Transaccion<CuentaCheque>* t = new Transaccion<CuentaCheque>(dynamic_cast<CuentaCheque*>(cb2), monto, type);
				t->ejecutarTransaccion();
			}
		}
	}
}
void eliminar_cuenta() {
	int nc;
	cout << "Ingrese el numero de cuenta: " << endl;
	cin >> nc;
	lcf->eliminarCuenta(nc);
}
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
			Agregar_Cuenta();
			break;
		case 2: //realizar deposito a cuenta
			break;
		case 3: //realizar retiro de dinero
			break;
		case 4: //mostrar informacion de cuenta bancaria
			lcf->MostrarCuentas();
			break;
		case 5:
			eliminar_cuenta();
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
