#include "Enemigo.h"
#include "Ataque.h"



Enemigo::Enemigo() : _ataque(NULL)
{

}


Enemigo::~Enemigo()
{
	if(_ataque) delete _ataque;
}

void Enemigo::CambiarAtaque(Ataque * ataque)
{
	if (_ataque) delete _ataque;
	_ataque = ataque;
}

void Enemigo::Atacar()
{
	if(_ataque) _ataque->EjecutarAtaque();
	else cout << "No ataca" << endl;
}
