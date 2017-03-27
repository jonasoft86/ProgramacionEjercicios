#include "Avion.h"


Avion::Avion():Participante()
{
    this->setNombre("Avion");
}

/*
void Avion::disparar(Participante enemigo)
{
    enemigo.quitarVida(enemigo.danioParaAvion());
}
*/

int Avion::danioParaTanque()
{
    return 200;
}

int Avion::danioParaAvion()
{
    return 500;
}

int Avion::danioParaSoldado()
{
    return 650;
}
