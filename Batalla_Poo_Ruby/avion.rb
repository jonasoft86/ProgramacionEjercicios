require_relative "participante.rb"

class Avion < Participante

    def getTipo
        return "Avion"
    end

    def disparar(enemigo)
       enemigo.danio(enemigo.danioParaAvion())
    end

    def danioParaTanque()
        return 200
    end

    def danioParaSoldado()
        return 500
    end

    def danioParaAvion()
        return 650
    end

end