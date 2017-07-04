#pragma once
#include "Ataque.h"
class Disparo :
	public Ataque
{
public:
	Disparo();
	~Disparo();

	void EjecutarAtaque();
};

