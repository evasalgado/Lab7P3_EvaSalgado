#pragma once
#include "CuentaBancaria.h"
class CuentaAhorro: public CuentaBancaria{
	double TasaInteres;
public:
	CuentaAhorro();
	CuentaAhorro(double balance, int NumCuenta, string Nombre, double TasaInteres);
	double getTasaInteres();
	void setTasaInteres(double& TasaInteres);
	void depositar(double monto) ;
	void retirar(double monto) ;
	void imprimir();
	~CuentaAhorro();
};

