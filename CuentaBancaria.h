#pragma once
#include <string>
using namespace std;
class CuentaBancaria{
protected: 
	double balance=0.0;
	int NumCuenta;
	string Nombre;
public:
	CuentaBancaria();
	CuentaBancaria(double balance, int NumCuenta, string Nombre);
	double getBalance();
	int getNumCuenta();
	string getNombre();
	void setBalance(double& balance);
	void setNumCuenta(int& NumCuenta);
	void setNombre(string& Nombre);
	virtual void depositar(double monto)=0;
	virtual void retirar(double monto)=0;
	virtual void imprimir() = 0;
	~CuentaBancaria();
};

