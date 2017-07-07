#include "Flame.h"



Flame::Flame(Component* component) : Accesory(component)
{
}


Flame::~Flame()
{
}

void Flame::Shoot()
{
	Accesory::Shoot();
	cout << "...with flames" << endl;
}
