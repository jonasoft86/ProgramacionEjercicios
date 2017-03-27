#ifndef AVION_H
#define AVION_H

#include "Participante.h"
#include<string>

using namespace std;

class Avion : public Participante
{
    public:
        Avion();

        //virtual void disparar(Participante);
        virtual int danioParaTanque();
        virtual int danioParaAvion();
        virtual int danioParaSoldado();

    private:
};

#endif // AVION_H
