#include "Accesory.h"



Accesory::Accesory(Component * component)
{
	_component = component;
}

Accesory::~Accesory()
{
	delete _component;
}

void Accesory::Shoot()
{
	_component->Shoot();
}
