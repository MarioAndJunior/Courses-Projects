class Data():
    def __init__(self, dia, mes, ano):
        self.dia = dia
        self.mes = mes
        self.ano = ano

    def formatada(self):
        print("{0:02d}/{1:02d}/{2:04d}".format(self.dia, self.mes, self.ano))