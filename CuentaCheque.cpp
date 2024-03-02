#include "CuentaCheque.h"
#include "CuentaAhorro.h"
#include <iostream>
CuentaCheque::CuentaCheque():CuentaBancaria(){}
CuentaCheque::
CuentaCheque(double balance, int NumCuenta, string Nombre, double sobreGiro):
CuentaBancaria(balance, NumCuenta, Nombre){
	this->sobreGiro = sobreGiro;
}
double CuentaCheque::getSobreGiro() {
	return sobreGiro;
}
void CuentaCheque::setSobleGiro(double sobreGiro) {
	if (sobreGiro>=100.0&&sobreGiro<=350.0){
		this->sobreGiro = sobreGiro;
	}
}
void CuentaCheque::depositar(double monto) {
	this->balance += monto;
	cout << "Deposito hecho correctamente" << endl;
}
void CuentaCheque::retirar(double monto) {
	this->balance -= (monto-sobreGiro);
	cout << "Retiro realizado correctamente"<<endl;
}
void CuentaCheque::imprimir() {
	CuentaBancaria::imprimir();
	cout << "Tipo de cuenta: Cheque" << endl;
	cout << "Sobre giro: " << sobreGiro << endl;
}
CuentaCheque::~CuentaCheque() {
	sobreGiro = 0.0;
}
