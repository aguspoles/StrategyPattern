#pragma once
#include <iostream>
using namespace std;

class Ataque //interface
{
public:
	Ataque();
	virtual ~Ataque();

	virtual void EjecutarAtaque() = 0;
};

