#pragma once
#include <iostream>
#include "CuentaBancaria.h"
#include "CuentaAhorro.h"
#include "CuentaCheque.h"
using namespace std;
template <typename T>
class Transaccion {
	T* cuentaBancaria;
	double monto;
	string tipo;
public:
	Transaccion(T* cuentaBancaria,
		double& monto, string& tipo) {
		this->cuentaBancaria = cuentaBancaria;
		this->monto = monto;
		this->tipo = tipo;
	}
	T* getCuentaBancaria() {
		return cuentaBancaria;
	}
	void setCuentaBancaria(T* cuentaBancaria) {
		this->cuentaBancaria = cuentaBancaria;
	}
	double getMonto() {
		return monto;
	}
	void setMonto(double& monto) {
		this->monto = monto;
	}
	string getTipo() {
		return tipo;
	}
	void setTipo(string& tipo) {
		this->tipo = tipo;
	}
	void ejecutarTransaccion() {
		if (typeid(*cuentaBancaria) == typeid(CuentaAhorro)) {
			CuentaAhorro* ca = dynamic_cast<CuentaAhorro*>(cuentaBancaria);
			if (tipo == "Deposito") {
				ca->depositar(monto);
			}
			else if (tipo == "Retiro") {
				ca->retirar(monto);
			}
		}
		else if (typeid(*cuentaBancaria) == typeid(CuentaCheque)) {
			CuentaCheque* cc = dynamic_cast<CuentaCheque*>(cuentaBancaria);
			if (tipo == "Deposito") {
				cc->depositar(monto);
			}
			else if (tipo == "Retiro") {
				cc->retirar(monto);
			}
		}
	}
	~Transaccion() {
		monto = 0;
		tipo = "";
	}

};

