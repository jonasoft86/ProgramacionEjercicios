#ifndef PARTICIPANTE_H
#define PARTICIPANTE_H

#include<string>

using namespace std;

class Participante
{
    public:
        Participante();

        void setNombre(string);
        virtual string getNombre();

        void setVida(int);
        int getVida();

        int quitarVida(int);
        bool estaVivo();

        string getNombreCompleto();

        //virtual void disparar(Participante);
        virtual int danioParaTanque() const = 0;
        virtual int danioParaAvion();
        virtual int danioParaSoldado();

    private:
        string nombre;
        int vida;
};

#endif // PARTICIPANTE_H
