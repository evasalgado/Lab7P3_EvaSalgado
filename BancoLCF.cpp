#include "BancoLCF.h"
#include <iostream>
using namespace std;
BancoLCF::BancoLCF() {
	this->cuentas = cuentas;
}
vector<CuentaBancaria*> BancoLCF::getCuenta() {
	return cuentas;
}
void BancoLCF::setCuenta(vector<CuentaBancaria*>& cuentas) {
	this->cuentas = cuentas;
}
void BancoLCF::agregarCuenta(CuentaBancaria* cuenta) {
	cuentas.push_back(cuenta);
	cout << "Cuenta creada exitosamente"<<endl;
}
void BancoLCF::MostrarCuentas() {
	if (cuentas.empty()){
		cout << "No hay cuentas bancarias aun";
	}else {
		for (CuentaBancaria* c: cuentas) {
			c->imprimir();
		}
	}
}
void BancoLCF::eliminarCuenta(int numCuenta) {
	if (cuentas.empty()){
		cout << "no hay cuentas hechas"<<endl;
	}else {
		for (int i = 0; i < cuentas.size(); i++) {
			CuentaBancaria* c = cuentas[i];
			if (c->getNumCuenta() == numCuenta) {
				cuentas.erase(cuentas.begin() + i);
				cout << "Cuenta eliminada exitosamente"<<endl;
			}
			else {
				cout << "Cuenta no encontrada" << endl;
			}
		}
	}
}
BancoLCF::~BancoLCF() {
	for (CuentaBancaria* c:cuentas) {
		delete c;
	}
}
