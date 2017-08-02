#include "Personaje.h"
#include "Enemigo.h"
#include "GolpeBasico.h"//****
#include "Disparo.h"
#include "Armadura.h"
#include "Arma.h"
#include "Posion.h"
#include "Sword.h"
#include "Laser.h"
#include "Shield.h"
#include "Flame.h"

int main() {

	/*Personaje* p = new Personaje();
	Item* armadura = new Armadura();

	p->AgarrarItem(armadura);*/

	//strategy pattern
	/*Enemigo* e = new Enemigo();

	e->CambiarAtaque(new GolpeBasico());
	e->Atacar();
	e->CambiarAtaque(new Disparo());
	e->Atacar();
	delete e;
	delete p;
	delete armadura;*/
	//*************************

	//decorator/component pattern
	Sword* curveSowrd = new Sword();
	Component* jediSword = new Laser(curveSowrd);
	jediSword->Shoot();
	delete jediSword;

	Accesory* flameShield = new Flame(new Shield());
	flameShield->Shoot();
	delete flameShield;
	//**************************

	cin.get();


	return 0;
}