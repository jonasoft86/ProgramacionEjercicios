#include "Tanque.h"

Tanque::Tanque()
{
    this->setNombre("Tanque");
}

/*
void Tanque::disparar(Participante enemigo)
{
    //enemigo.quitarVida(enemigo.danioParaTanque());
}
*/
int Tanque::danioParaTanque() const
{
    return 500;
}

int Tanque::danioParaAvion()
{
    return 600;
}

int Tanque::danioParaSoldado()
{
    return 250;
}
