#pragma once
#include "Weapon.h"

class Shield :
	public Weapon
{
public:
	Shield();
	virtual ~Shield();

	virtual void Shoot();
};

