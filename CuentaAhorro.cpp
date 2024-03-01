#include "CuentaAhorro.h"
#include <iostream>
CuentaAhorro::CuentaAhorro
(double balance, int NumCuenta, string Nombre, double TasaInteres):
	CuentaBancaria( balance, NumCuenta, Nombre){
	this->TasaInteres = TasaInteres;
}
double CuentaAhorro::getTasaInteres() {
	return TasaInteres;
}
void CuentaAhorro::setTasaInteres(double& TasaInteres) {
	this->TasaInteres = TasaInteres;
}
void CuentaAhorro:: depositar(double monto) {
	/*double b = this->balance;*/
	double bono = ((int)TasaInteres % 100)*monto;
	this->balance += bono;
}
void CuentaAhorro::retirar(double monto)  {
	//double b = 0;
	//b = this->balance;
	if (monto<balance){
		//b-=monto;
		this->balance -= monto;
	}
	else {
		cout << "Monto excede los limites en balance"<<endl;
	}
}
CuentaAhorro::~CuentaAhorro() {
	TasaInteres = 0.0;
}
