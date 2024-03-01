#pragma once
#include <vector>
#include "CuentaBancaria.h"
class BancoLCF{
	vector<CuentaBancaria*> cuentas;
public: 
	BancoLCF();
	vector<CuentaBancaria*> getCuenta();
	void setCuenta(vector<CuentaBancaria*>& cuentas);
	void agregarCuenta(CuentaBancaria* cuenta);
	void eliminarCuenta(int numCuenta);
	void MostrarCuentas();
	~BancoLCF();
};

