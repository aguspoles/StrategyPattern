#include "Personaje.h"
#include "Enemigo.h"
#include "GolpeBasico.h"//****
#include "Disparo.h"
#include "Armadura.h"
#include "Arma.h"
#include "Posion.h"

int main() {

	/*Personaje* p = new Personaje();
	Item* armadura = new Armadura();

	p->AgarrarItem(armadura);*/

	Enemigo* e = new Enemigo();

	e->CambiarAtaque(new GolpeBasico());
	e->Atacar();
	e->CambiarAtaque(new Disparo());
	e->Atacar();

	cin.get();

	delete e;

	return 0;
}