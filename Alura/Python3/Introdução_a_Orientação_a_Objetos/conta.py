class Conta():
    def __init__(self, numero, titular, saldo, limite):
        print("Construindo objeto {}".format(self))
        self.__numero = numero
        self.__titular = titular
        self.__saldo = saldo
        self.__limite = limite

    def consulta_saldo(self):
        print("Saldo do titular {}: {}".format(self.__titular, self.__saldo))

    def deposita(self, valor):
        self.__saldo += valor

    def saca(self, valor):
        if(self.__pode_sacar(valor)):
            self.__saldo -= valor
        else:
            print("Seu saldo não é suficiente para essa operação!")

    def transfere(self, valor, destino):
        self.saca(valor)
        destino.deposita(valor)

    def __pode_sacar(self, valor):
        return valor <= self.__saldo + self.__limite

    @staticmethod
    def codigo_banco():
        return "001"

    @staticmethod
    def codigo_bancos():
        return {"BB": "001", "Caixa": "104", "Bradesco": "237"}

    @property
    def titular(self):
        return self.__titular

    @property
    def saldo(self):
        return self.__saldo

    @property
    def limite(self):
        return self.__limite

    @limite.setter
    def limite(self, limite):
        self.__limite = limite