class Participante

    attr_accessor :nombre, :vida

    def initialize()
    end

    def getTipo
    end

    def danio(valor)
        self.vida = self.vida - valor
        return self.vida
    end

    def estaVivo?
        self.vida > 0
    end

    def disparar(enemigo)
    end

    def danioParaTanque()
    end

    def danioParaSoldado()
    end

    def danioParaAvion()
    end

end