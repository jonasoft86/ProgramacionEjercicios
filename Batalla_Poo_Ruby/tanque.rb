require_relative "participante.rb"

class Tanque < Participante

    def getTipo
        return "Tanque"
    end

    def disparar(enemigo)
       enemigo.danio(enemigo.danioParaTanque())
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