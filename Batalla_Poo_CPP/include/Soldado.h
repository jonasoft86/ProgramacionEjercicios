#ifndef SOLDADO_H
#define SOLDADO_H

#include "Participante.h"
#include<string>

using namespace std;

class Soldado : public Participante
{
    public:
        Soldado();

        //virtual void disparar(Participante);
        virtual int danioParaTanque();
        virtual int danioParaAvion();
        virtual int danioParaSoldado();
    private:
};

#endif // SOLDADO_H
