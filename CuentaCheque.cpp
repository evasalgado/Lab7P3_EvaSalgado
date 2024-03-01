#include "CuentaCheque.h"
CuentaCheque::
CuentaCheque(double balance, int NumCuenta, string Nombre, double sobreGiro):
CuentaBancaria(balance, NumCuenta, Nombre){
	this->sobreGiro = sobreGiro;
}
double CuentaCheque::getSobreGiro() {
	return sobreGiro;
}
void CuentaCheque::setSobleGiro(double sobreGiro) {
	this->sobreGiro = sobreGiro;
}
void CuentaCheque::depositar(double monto) {
	this->balance += monto;
}
void CuentaCheque::retirar(double monto) {
	this->balance -= (monto-sobreGiro);
}
CuentaCheque::~CuentaCheque() {
	sobreGiro = 0.0;
}
