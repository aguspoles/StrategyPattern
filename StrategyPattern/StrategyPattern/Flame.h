#pragma once

#include "Accesory.h"
class Flame :
	public Accesory
{
public:
	Flame(Component* component);
	~Flame();

	void Shoot();
};

