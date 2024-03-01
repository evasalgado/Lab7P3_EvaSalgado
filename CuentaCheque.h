#pragma once
#include "CuentaBancaria.h"
class CuentaCheque: public CuentaBancaria{
	double sobreGiro;
public: 
	CuentaCheque(double balance, int NumCuenta, string Nombre, double sobreGiro);
	double getSobreGiro();
	void setSobleGiro(double sobreGiro);
	void depositar(double monto);
	void retirar(double monto);
	~CuentaCheque();
};

