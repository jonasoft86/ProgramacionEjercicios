
require_relative "participante.rb"
require_relative "avion.rb"
require_relative "soldado.rb"
require_relative "tanque.rb"

def obtenerParticipante()
    p = nil
    case rand(1..3)
        when 1
            p = Tanque.new
        when 2
            p = Avion.new
        when 3
            p = Soldado.new
    end

    return p
end

participantes = Array.new(10)

for index in 0 ... participantes.size
    p = obtenerParticipante()
    participantes[index] = p
    participantes[index].vida = 1000
    participantes[index].nombre = "Participante Numero: #{index+1} Tipo: #{participantes[index].getTipo()}"
end

puts "\n*********** Lista de Participantes *****************\n\n"

for index in 0 ... participantes.size
    puts participantes[index].nombre
end

puts "\n*********** Batalla *****************\n"


while participantes.size > 1

    indiceAtacante = rand(1..participantes.size-1)
    indiceEnemigo = rand(1..participantes.size-1)

    atacante = participantes[indiceAtacante]
    enemigo = participantes[indiceEnemigo]

    atacante.disparar(enemigo);

    puts "\n****************************\n"
    puts "\n Nombre: #{atacante.nombre}"
    puts "\n Vida: #{atacante.vida}"
    puts "\n-----------------------------"
    puts "\n Ataca a  #{enemigo.nombre}"
    puts "\n Vida: #{enemigo.vida}"

    if !enemigo.estaVivo?
        participantes.delete_at(indiceEnemigo)
    end

    puts "\n" 
    puts "\n**********************************************"
    puts "\n Sobreviviente : #{participantes[0].nombre}"
    puts "\n**********************************************"

end

gets()