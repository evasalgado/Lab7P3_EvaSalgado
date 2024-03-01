#pragma once
#include <iostream>
#include "CuentaBancaria.h"
using namespace std;
template <typename T>
class Transaccion{
	T* cuentaBancaria;
	double monto;
	string tipo;
public: 
	Transaccion(CuentaBancaria <T>& cuentaBancaria,
		double& monto,
		string& tipo) {
		this->cuentaBancaria = cuentaBancaria;
		this->monto = monto;
		this->tipo = tipo;
	}
	T* getCuentaBancaria() {
		return cuentaBancaria;
	}
	void setCuentaBancaria(CuentaBancaria <T>& cuentaBancaria) {
		this->cuentaBancaria = cuentaBancaria;
	}

	void ejecutarTransaccion() {

	}
	~Transaccion();

};

