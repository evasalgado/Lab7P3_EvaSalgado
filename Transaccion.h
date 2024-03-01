#pragma once
#include <iostream>
#include "CuentaBancaria.h"
using namespace std;
template <typename T>
class Transaccion{
	T <T*> cuentaBancaria;
	double monto;
	string tipo;
public: 
	Transaccion(CuentaBancaria <T> &cuentaBancaria,
	double &monto,
	string &tipo);
	ejecutarTransaccion();
	~Transaccion();

};

