#pragma once
#include "Component.h"

class Accesory :
	public Component
{
private:
	Component* _component;
public:
	Accesory(Component* component);
	virtual ~Accesory();

	virtual void Shoot();
};

