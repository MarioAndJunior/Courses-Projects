from abc import ABCMeta, abstractmethod

class Programa(metaclass= ABCMeta):
    def __init__(self, nome, ano):
        self._nome = nome.title()
        self.ano = ano
        self._likes = 0

    @property
    def likes(self):
        return self._likes

    def dar_likes(self):
        self._likes += 1

    @property
    def nome(self):
        return self._nome

    @nome.setter
    def nome(self, nome):
        self._nome = nome

    @abstractmethod
    def __str__(self):
        return f'Nome: {self.nome} Likes: {self.likes}'

class Filme(Programa):
    def __init__(self, nome, ano, duracao):
        super().__init__(nome, ano)
        self.duracao = duracao
    
    def __str__(self):
        return f'Nome: {self.nome} - {self.duracao} min - Likes: {self.likes}'

class Serie(Programa):
    def __init__(self, nome, ano, temporadas):
        super().__init__(nome, ano)
        self.temporadas = temporadas

    def __str__(self):
        return f'Nome: {self.nome} - {self.temporadas} temporadas - Likes: {self.likes}'

class Playlist:
    def __init__(self, nome, listagem):
        self.nome = nome
        self._listagem = listagem

#Ducktyping
    def __getitem__(self, item):
        return self._listagem[item]
    def __len__(self):
        return len(self._listagem)

    @property
    def listagem(self):
        return self._listagem

    @property
    def tamanho(self):
        return len(self._listagem)

vingadores = Filme('vingadores - guerra infinita', 2018, 160)
atlanta = Serie('atlanta', 2018, 2)
demolidor = Serie("demolidor", 2016, 2)
tmep = Filme("todo mundo em pânico", 2000, 90)

vingadores.dar_likes()
vingadores.dar_likes()
demolidor.dar_likes()
demolidor.dar_likes()
tmep.dar_likes()
tmep.dar_likes()
tmep.dar_likes()

atlanta.dar_likes()
atlanta.dar_likes()

listinha = [atlanta, vingadores, demolidor, tmep]

playlist_fds = Playlist("Fim de semana toppers", listinha)

for programa in playlist_fds:
    print(programa)

print(f"Tamanho da playlist: {len(playlist_fds)}")