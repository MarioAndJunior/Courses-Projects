def escolhendo_palavra_secreta_menos_memoria
arquivo = File.new("dicionario", "r")
total_de_palavras = arquivo.gets.to_i
aleatoria = rand(total_de_palavras)
for i in 1..aleatoria -1
    arquivo.gets
end
palavra_secreta = arquivo.gets.strip.downcase
arquivo.close
end

# Assim como uma empilhadeira, a execução de um programa empilha as diversas funções que vão sendo envocadas. O processo de empilhar (::push::) e desempilhar (::pop::) é feito toda vez que entramos e saímos de uma função, permitindo que o programa saiba exatamente onde está e de onde veio. A pilha de coisas também tem nome, é a pilha de execução (::execution stack::). E aquelas linhas que mostram onde estamos, que nos mostra todo o caminho percorrido (::trace::) na pilha de execução é o ::stack trace::. #

