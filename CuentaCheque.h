#pragma once
#include "CuentaBancaria.h"
class CuentaCheque: public CuentaBancaria{
	double sobreGiro;
public: 
	CuentaCheque(double balance, int NumCuenta, string Nombre, double sobreGiro);
	double getSobreGiro();
	void setDobleGiro(double sobreGiro);
	virtual void depositar(double monto) const override;
	virtual void retirar(double monto) const override;
	~CuentaCheque();
};

