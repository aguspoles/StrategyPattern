#include "Laser.h"



Laser::Laser(Component* component) : Accesory(component)
{
}


Laser::~Laser()
{
}

void Laser::Shoot()
{
	Accesory::Shoot();
	cout << "..., jedi sword style" << endl;
}
