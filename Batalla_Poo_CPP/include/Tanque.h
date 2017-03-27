#ifndef TANQUE_H
#define TANQUE_H

#include "Participante.h"
#include<string>

using namespace std;

class Tanque : public Participante
{
    public:
        Tanque();

        //virtual void disparar(Participante);
        virtual int danioParaTanque() const;
        virtual int danioParaAvion();
        virtual int danioParaSoldado();
    private:
};

#endif // TANQUE_H
