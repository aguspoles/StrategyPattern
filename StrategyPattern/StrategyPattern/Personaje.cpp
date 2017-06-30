#include "Personaje.h"



Personaje::Personaje()
{
}


Personaje::~Personaje()
{
}

void Personaje::AgarrarItem(Item* item)
{
	item->Usar();
}
