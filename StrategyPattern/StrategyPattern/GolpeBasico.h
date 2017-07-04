#pragma once
#include "Ataque.h"

class GolpeBasico :
	public Ataque
{
public:
	GolpeBasico();
	~GolpeBasico();

	void EjecutarAtaque();
};

