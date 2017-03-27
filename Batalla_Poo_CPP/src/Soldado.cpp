#include "Soldado.h"


Soldado::Soldado():Participante()
{
    this->setNombre("Soldado");
}

/*
void Soldado::disparar(Participante enemigo)
{
    enemigo.quitarVida(enemigo.danioParaSoldado());
}
*/

int Soldado::danioParaTanque()
{
    return 700;
}

int Soldado::danioParaAvion()
{
    return 200;
}

int Soldado::danioParaSoldado()
{
    return 450;
}
