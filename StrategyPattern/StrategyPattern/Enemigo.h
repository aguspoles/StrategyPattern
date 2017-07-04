#pragma once

class Ataque;//forward declaration
//si cambia el ataque, no tengo que recompilarlo, lo que me ocurriria si usara el include.
//solo valido si uso punteros.
//el include lo hago en el cpp.

class Enemigo
{
private:
	Ataque* _ataque;
public:
	Enemigo();
	virtual ~Enemigo();

	void CambiarAtaque(Ataque* ataque);
	void Atacar();
};

