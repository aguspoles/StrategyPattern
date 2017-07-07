#pragma once
#include "Accesory.h"

class Laser :
	public Accesory
{
public:
	Laser(Component* component);
	~Laser();

	void Shoot();
};

