#include "CuentaBancaria.h"
#include <iostream>
CuentaBancaria::CuentaBancaria(){
}
CuentaBancaria::CuentaBancaria(double balance, int NumCuenta, string Nombre) {
	this->balance = balance;
	this->NumCuenta = NumCuenta;
	this->Nombre = Nombre;
}
double CuentaBancaria::getBalance() {
	return balance;
}
void CuentaBancaria::setBalance(double &balance) {
	if (balance>=0&&balance<=100000){
		this->balance = balance;
	}
	else {
		throw invalid_argument("Saldo debe estar entre 0 a 100,000");
	}
}
int CuentaBancaria::getNumCuenta() {
	return NumCuenta;
}
void CuentaBancaria::setNumCuenta(int &NumCuenta) {
	if (NumCuenta>=1000&&NumCuenta<=9999)	{
		this->NumCuenta = NumCuenta;
	}
	else {
		throw invalid_argument("Numero ingresado invalido");
	}
}
string CuentaBancaria::getNombre() {
	return Nombre;
}
void CuentaBancaria::setNombre(string& Nombre) {
	this->Nombre = Nombre;
}
void CuentaBancaria::depositar(double monto) {
	monto = 0.0;
}
void CuentaBancaria::retirar(double monto) {
	monto = 0.0;
}
void CuentaBancaria::imprimir() {
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
