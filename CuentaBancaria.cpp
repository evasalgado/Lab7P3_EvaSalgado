#include "CuentaBancaria.h"
#include <iostream>
CuentaBancaria::CuentaBancaria(double balance, int NumCuenta, string Nombre) {
	this->balance = balance;
	this->NumCuenta = NumCuenta;
	this->Nombre = Nombre;
}
double CuentaBancaria::getBalance() {
	return balance;
}
void CuentaBancaria::setBalance(double &balance) {
	this->balance = balance;
}
int CuentaBancaria::getNumCuenta() {
	return NumCuenta;
}
void CuentaBancaria::setNumCuenta(int &NumCuenta) {
	this->NumCuenta = NumCuenta;
}
string CuentaBancaria::getNombre() {
	return Nombre;
}
void CuentaBancaria::setNombre(string& Nombre) {
	this->Nombre = Nombre;
}
void CuentaBancaria::depositar(double monto) const {
	monto = 0.0;
}
void CuentaBancaria::retirar(double monto) const {
	monto = 0.0;
}
void CuentaBancaria::imprimir() const{
	cout << "Account number: "<<NumCuenta<<endl;
	cout << "Owner: " << Nombre << endl;
	cout << "Balance: " << balance << endl;
}
CuentaBancaria::~CuentaBancaria() {
	balance = 0;
	NumCuenta = 0;
	Nombre = "";
}
//void CuentaBancaria::depositar(double monto) const {
//	monto = 0.0;
//}
//void CuentaBancaria::retirar(double monto) const {
//	monto = 0.0;
//}
