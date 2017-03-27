require_relative "participante.rb"

class Soldado < Participante

    def getTipo
        return "Soldado"
    end

    def disparar(enemigo)
       enemigo.danio(enemigo.danioParaSoldado())
    end

    def danioParaTanque()
        return 700
    end

    def danioParaSoldado()
        return 200
    end

    def danioParaAvion()
        return 450
    end

end