#pragma once
#include <vector>
#include "Transaccion.h"
class BancoLCF{
	Transaccion <CuentaBancaria*> cuentas;
public: 
	BancoLCF(Transaccion <CuentaBancaria*> cuentas);
	Transaccion <CuentaBancaria*> getCuenta();
	void setCuenta(Transaccion <CuentaBancaria*>& cuentas);
	void agregarCuenta(CuentaBancaria* cuenta);
	void eliminarCuenta(int numCuenta);
	void MostrarCuentas();
	~BancoLCF();
};

