#pragma once
#include <iostream>
#include "CuentaBancaria.h"
#include "CuentaAhorro.h"
#include "CuentaCheque.h"
using namespace std;
template <typename T>
class Transaccion{
	T* cuentaBancaria;
	double monto;
	string tipo;
public: 
	Transaccion(T* cuentaBancaria,
		double& monto,string& tipo) {
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
		if (tipo=="Ahorro") {
			CuentaAhorro cb = cuentaBancaria<CuentaAhorro>;
			cb.depositar();
		}else if (tipo=="Cheque") {
			
		}
	}
	~Transaccion() {
		monto = 0;
		tipo = "";
	}

};

