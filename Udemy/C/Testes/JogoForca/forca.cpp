#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<time.h>

using namespace std;

void mainMenu();

void clearScreen()
{
    system("CLS");
}

string randomWord()
{
    string words[4] = {"programa", "codigo", "chave", "ovo"};

    int randomIndex = rand() % 4;

    return words[randomIndex];
}

string maskAppplier(string word, int wordSize)
{
    int counter = 0;
    string maskedWord;
    
    while(counter < wordSize)
    {
        maskedWord += '_';
        counter++;
    }
    
    return maskedWord;
}

void showStatus(string maskedWord, int wordSize, int remaningTries, string triedLetters, string message)
{
    int i = 0;
    cout << message;
    cout << "\nPalavra: "<< maskedWord << " Tamanho: " << wordSize;
    cout << "\nTentativas restantes: " << remaningTries;
        
        cout<< "\nLetras digitadas: "; 
        for(i = 0; i < triedLetters.size(); i++)
        { 
            cout << triedLetters[i] << " , " ;    
        }
}

int wannaRestart()
{
    int option = 0;

    cout << "\nDeseja reiniciar?";
    cout << "\n1 - Sim";
    cout << "\n2 - Nao";
    cout << "\n";
    cin >> option;
    
    if (option == 1) 
    {
        mainMenu();
    }
    else
    {
        cout << "\nAteh mais";
    }
    
}

void play(int numberOfPlayers)
{
    string word;

    if (numberOfPlayers == 1)
    {
        word = randomWord();
    }
    else
    {
        cout << "\nDigite uma palavra";
        cin >> word;
    }
    
    int wordSize = word.size();
    string maskedWord = maskAppplier(word, wordSize);

    int tries = 0;
    int counter = 0;
    int triesMax = 10;

    char letter;
    string triedLetters;
    bool alreadyTriedLetter = false;
    bool rightLetter = false;

    string message = "Bem vindo ao jogo!!";
    
    while(triesMax - tries > 0)
    {
        clearScreen();
        showStatus(maskedWord, wordSize, triesMax - tries, triedLetters, message);
        cout << "\nDigite uma letra: ";
        cin >> letter;
        
        for(int i = 0; i < tries; i++)
        {
            if (triedLetters[i] == tolower(letter)) {
                message = "Voce ja digitou essa letra, por favor tente outra!";
                alreadyTriedLetter = true;
            }
        }
        
        if (alreadyTriedLetter != true) 
        {
            triedLetters += tolower(letter);

            for(counter = 0; counter < wordSize; counter++)
            {
                if(tolower(letter) == word[counter])
                {
                    maskedWord[counter] = word[counter];

                    
                    rightLetter = true;
                }
            }

            if (rightLetter == false)
            {
                message = "Voce errou uma letra!!";
            }
            else
            {
                message = "Voce acertou uma letra!!";
                
            }

            tries++;
        }
        rightLetter = false;
        alreadyTriedLetter = false;
    }
    
    if(maskedWord == word)
    {
        clearScreen();
        cout << "\nParabens, voce venceu!!!";
        wannaRestart();
    }
    else
    {
        clearScreen();
        cout << "\nQue pena, nao foi dessa vez!!!";
        wannaRestart();
    }
}

void mainMenu()
{
    int option = 0;

    while (option < 1 || option > 4)
    {
        clearScreen();

        cout << "Bem vindo ao jogo";
        cout << "\n1 - Jogar sozinho";
        cout << "\n2 - Jogar em dupla";
        cout << "\n3 - Sobre o jogo";
        cout << "\n4 - Sair";
        cout << "\nSelecione uma opcao e tecle ENTER\n";

        cin >> option;
        
            switch (option)
            {
                case 1:
                    play(1);
                    break;
                case 2:
                    play(2);
                    break;
                case 3:
                    cout << "Jogo desenvolvido por Mario Junior, Forca 1.0";
                    wannaRestart();
                    break;
                case 4:
                    cout << "Ateh  mais";
                    break;
                default:
                cout << "Opcao invalida";
                break;
            }
    }
    
}

int main(int argc, char const *argv[])
{
    srand((unsigned) time(NULL));

    mainMenu();
    return 0;
}
