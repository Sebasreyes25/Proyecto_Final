#pragma once
#include <string>
#include <iostream>
using namespace std;

class Ingenieria
{
private:
	string nombrealum;
	string ingenieria;
	int numcreditos;
	int cantclases;
	int valorcredito;
	int horasbeca;
	int numsemestres;
	float beca;
	float totalcarrera;
	float cuotaparqueo;
	float parqueototal;

public:

	void setnombrealum(string nombrealum) {
		this->nombrealum = nombrealum;
	}
	string getnombrealum() {
		return nombrealum;
	}

	void setingenieria (string ingenieria) {
		this->ingenieria = ingenieria;
	}
	string getingenieria() {
		return ingenieria;
	}

	void setnumcreditos(int numcreditos) {
		this->numcreditos = numcreditos;
	}
	int getnumcrditos() {
		return numcreditos;
	}

	void setcantclases(int cantclases) {
		this->cantclases = cantclases;
	}
	int getcantclases() {
		return cantclases;
	}

	void setvalorcredito(int valorcredito) {
		this->valorcredito = valorcredito;
	}
	int getvalorcredito() {
		return valorcredito;
	}

	void sethorasbeca(int horasbeca) {
		this->horasbeca = horasbeca;
	}
	int gethorasbeca() {
		return horasbeca;
	}

	void setnumsemestres(int numsemestres) {
		this->numsemestres = numsemestres;
	}
	int getnumsemestres() {
		return numsemestres;
	}

	void setbeca(float beca) {
		this->beca = beca;
	}
	float getbeca() {
		return beca;
	}

	void settotalcarrera(float totalcarrera) {
		this->totalcarrera = totalcarrera;
	}
	float gettotalcarrera() {
		return totalcarrera;
	}

	void setcuotaparqueo(float cuotacarrera) {
		this->cuotaparqueo = cuotacarrera;
	}
	float getcuotaparqueo() {
		return cuotaparqueo;
	}

	void setparqueototal(float parqueototal) {
		this->parqueototal = parqueototal;
	}
	float getparqueototal() {
		return parqueototal;
	}






};

