#pragma once
#include "CuentaBancaria.h"
class CuentaAhorro: public CuentaBancaria{
	double TasaInteres;
public:
	CuentaAhorro(double balance, int NumCuenta, string Nombre, double TasaInteres);
	double getTasaInteres();
	double setTasaInteres(double& TasaInteres);
	virtual void depositar(double monto) const override;
	virtual void retirar(double monto) const override;
	~CuentaAhorro();
};

