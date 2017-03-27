#include "Participante.h"

Participante::Participante(){}

void Participante::setNombre(string nombre)
{
    this->nombre = nombre;
}

string Participante::getNombre()
{
    return this->nombre;
}

void Participante::setVida(int vida)
{
    this->vida = vida;
}

int Participante::getVida()
{
    return this->vida;
}

//void Participante::disparar(Participante enemigo){}

int Participante::quitarVida(int valor)
{
     setVida(getVida() - valor);
     return getVida();
}

bool Participante::estaVivo()
{
    return (getVida()>0);
}

int Participante::danioParaTanque() const {}
int Participante::danioParaAvion(){}
int Participante::danioParaSoldado(){}


