#include "CuentaAhorro.h"
#include <iostream>
CuentaAhorro::CuentaAhorro():CuentaBancaria(){
}
CuentaAhorro::CuentaAhorro
(double balance, int NumCuenta, string Nombre, double TasaInteres):
	CuentaBancaria( balance, NumCuenta, Nombre){
	this->TasaInteres = TasaInteres;
}
double CuentaAhorro::getTasaInteres() {
	return TasaInteres;
}
void CuentaAhorro::setTasaInteres(double& TasaInteres) {
	if (TasaInteres>=10.0&&TasaInteres<=20.0) {
		this->TasaInteres = TasaInteres;
	}
	else {
		throw invalid_argument("Tasa de interes invalida");
	}
}
void CuentaAhorro:: depositar(double monto) {
	/*double b = this->balance;*/
	double bono = ((int)TasaInteres %100)*monto;
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
void CuentaAhorro::imprimir() {
	CuentaBancaria::imprimir();
	cout << "Tipo de cuenta: Ahorro"<<endl;
	cout << "Tasa de interes: " << TasaInteres << endl;
}
CuentaAhorro::~CuentaAhorro() {
	TasaInteres = 0.0;
}
