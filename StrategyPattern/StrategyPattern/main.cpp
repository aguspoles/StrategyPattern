#include "Personaje.h"
#include "Armadura.h"
#include "Arma.h"
#include "Posion.h"

int main() {

	Personaje* p = new Personaje();
	Item* armadura = new Armadura();

	p->AgarrarItem(armadura);

	cin.get();

	return 0;
}