import random

def jogar():

    imprime_boas_vindas()

    palavra_secreta = carrega_palavra_secreta()
    letras_acertadas = mascara_palavra_secreta(palavra_secreta)
    print(letras_acertadas)

    enforcou = False
    acertou = False
    tentativas = 7

    while(not enforcou and not acertou):
        
        chute = pega_chute()

        if(chute in palavra_secreta):
           marca_acerto(chute, palavra_secreta, letras_acertadas)
        else:
            desenha_forca(tentativas)
            tentativas -= 1
            print("A palavra secreta não contém a letra {}, você ainda tem {} tentativas".format(chute, tentativas))
        
        print(letras_acertadas)
        if(tentativas == 0):
            enforcou = True
        elif('_' not in letras_acertadas):
            acertou = True

    if(acertou == True):
        imprime_vitoria()
    else:
        imprime_derrtota(palavra_secreta)

    print("Fim do jogo")



def imprime_boas_vindas():
    print("*********************************")
    print("***Bem vindo ao jogo da Forca!***")
    print("*********************************")

def carrega_palavra_secreta():
    palavras = []
    with open("palavras.txt", "r") as arquivo:
        for linha in arquivo:
            palavras.append(linha.strip().upper())
    
    aleatorio = random.randrange(0, len(palavras))

    palavra_secreta = palavras[aleatorio]
    return palavra_secreta

def mascara_palavra_secreta(palavra_secreta):
    return ['_' for letra in palavra_secreta]

def pega_chute():
    chute = input("Qual letra? ")
    chute = chute.strip().upper()
    return chute

def marca_acerto(chute, palavra_secreta, letras_acertadas):
    index = 0
    for letra in palavra_secreta:
        if(chute == letra):
            letras_acertadas[index] = chute
        index = index + 1

def desenha_forca(tentativas):
    print("  _______     ")
    print(" |/      |    ")

    if(tentativas == 7):
        print (" |      (_)   ")
        print (" |            ")
        print (" |            ")
        print (" |            ")

    if(tentativas == 6):
        print (" |      (_)   ")
        print (" |      \     ")
        print (" |            ")
        print (" |            ")

    if(tentativas == 5):
        print (" |      (_)   ")
        print (" |      \|    ")
        print (" |            ")
        print (" |            ")

    if(tentativas == 4):
        print (" |      (_)   ")
        print (" |      \|/   ")
        print (" |            ")
        print (" |            ")

    if(tentativas == 3):
        print (" |      (_)   ")
        print (" |      \|/   ")
        print (" |       |    ")
        print (" |            ")

    if(tentativas == 2):
        print (" |      (_)   ")
        print (" |      \|/   ")
        print (" |       |    ")
        print (" |      /     ")

    if (tentativas == 1):
        print (" |      (_)   ")
        print (" |      \|/   ")
        print (" |       |    ")
        print (" |      / \   ")

    print(" |            ")
    print("_|___         ")
    print()

def imprime_derrtota(palavra_secreta):
    print("Puxa, você foi enforcado!")
    print("A palavra era {}".format(palavra_secreta))
    print("    _______________         ")
    print("   /               \       ")
    print("  /                 \      ")
    print("//                   \/\  ")
    print("\|   XXXX     XXXX   | /   ")
    print(" |   XXXX     XXXX   |/     ")
    print(" |   XXX       XXX   |      ")
    print(" |                   |      ")
    print(" \__      XXX      __/     ")
    print("   |\     XXX     /|       ")
    print("   | |           | |        ")
    print("   | I I I I I I I |        ")
    print("   |  I I I I I I  |        ")
    print("   \_             _/       ")
    print("     \_         _/         ")
    print("       \_______/           ")

def imprime_vitoria():
    print("Parabéns, você ganhou!")
    print("       ___________      ")
    print("      '._==_==_=_.'     ")
    print("      .-\\:      /-.    ")
    print("     | (|:.     |) |    ")
    print("      '-|:.     |-'     ")
    print("        \\::.    /      ")
    print("         '::. .'        ")
    print("           ) (          ")
    print("         _.' '._        ")
    print("        '-------'       ")

if(__name__ == "__main__"):
    jogar()
