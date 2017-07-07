#pragma once
#include "Component.h"

class Weapon :
	public Component
{
public:
	Weapon();
	virtual ~Weapon();

	virtual void Shoot()=0;
};

