def salva_ranking(nome, pontos)
	conteudo = "#{nome}\n#{pontos}"
	File.write "ranking.txt", conteudo
end

def le_ranking
	conteudo_atual = File.read "ranking.txt"
	dados = conteudo_atual.split("\n")
end

