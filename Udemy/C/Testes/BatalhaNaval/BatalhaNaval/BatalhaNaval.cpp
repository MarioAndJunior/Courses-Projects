// BatalhaNaval.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<stdbool.h>
#include<string>
#include<iostream>
#pragma warning(disable : 4996);

using namespace std;

void mainMenu();

void cleanScreen()
{
	system("CLS");
}

void startBoard(char board[10][10], char mask[10][10])
{
	int line = 0;
	int column = 0;

	for (line = 0; line < 10; line++)
	{
		for (column = 0; column < 10; column++)
		{
			board[line][column] = 'A';
			mask[line][column] = '*';
		}
	}
}

void showBoard(char board[10][10], char mask[10][10], bool showTrueBoard)
{

	char blue[] = { 0x1b, '[', '1', ';', '3', '4', 'm', 0 };
	char white[] = { 0x1b, '[', '1', ';', '3', '9', 'm', 0 };
	char green[] = { 0x1b, '[', '1', ';', '3', '2', 'm', 0 };

	int counter = 0;

	printf("   ");
	for (counter  = 0; counter < 10; counter++)
	{
		printf("%d ", counter);
	}
	printf("\n");

	int line = 0;
	int column = 0;

	for (line = 0; line < 10; line++)
	{
		printf("%d ", line);
		for (column = 0; column < 10; column++)
		{
			switch (mask[line][column])
			{
				case 'A':
					printf("%s", blue);
					printf(" %c", mask[line][column]);
					printf("%s", white);
					break;
				case 'P':
					printf("%s", green);
					printf(" %c", mask[line][column]);
					printf("%s", white);
					break;
				default:
					printf(" %c", mask[line][column]);
					break;
			}
	
		}

		printf("\n");
	}

	if (showTrueBoard == true)
	{
		for (line = 0; line < 10; line++)
		{
			for (column = 0; column < 10; column++)
			{
				printf(" %c", board[line][column]);
			}

			printf("\n");
		}
	}
}

void boatPositioner(char board[10][10])
{
	int boatQuantity = 10;
	int positionedQuantity = 0;


	while (positionedQuantity < boatQuantity)
	{
		
		int randomLine = rand() % 10;
		int randomColumn = rand() % 10;

		if (board[randomLine][randomColumn] == 'A')
		{
			board[randomLine][randomColumn] = 'P';

			positionedQuantity++;
		}

		board[randomLine][randomColumn] = 'P';
		
	}
}

void verifyShot(char board[10][10], int playedLine, int playedColumn, int *points, char message[255])
{
	switch (board[playedLine][playedColumn])
	{
		case 'A':
			strcpy(message, "Agua! Tente novamente");
			break;
		case 'P':
			*points = *points + 10;
			strcpy(message, "Acertou um barco pequeno! 10 pontos!");
			break;
		default:
			break;
	}
}

void game(char playerName[255])
{
	char board[10][10];
	char mask[10][10];
	int line = 0;
	int column = 0;
	int playedLine = 0;
	int playedColumn = 0;
	int playerTries = 0;
	int triesMax = 5;
	int points = 0;
	char message[255] = "Bem vindo ao Jogo!";
	int option = 0;
	
	startBoard(board, mask);
	boatPositioner(board);
	
	while (playerTries < triesMax)
	{
		cleanScreen();
		showBoard(board, mask, false);

		printf("\nJogador: %s", playerName);
		printf("\nTentativas restantes: %d", triesMax - playerTries);
		printf("\nPontos: %d", points);
		printf("\n%s", message);

		playedLine = -1;
		playedColumn = -1;

		while ((playedLine < 0 || playedColumn < 0) || (playedLine > 9 || playedColumn > 9))
		{
			printf("\n%s, digite uma linha: ", playerName);
			scanf("%d", &playedLine);

			printf("\n%s, digite uma coluna: ", playerName);
			scanf("%d", &playedColumn);
		}

		verifyShot(board, playedLine, playedColumn, &points, message);

		mask[playedLine][playedColumn] = board[playedLine][playedColumn];

		playerTries++;
	}

	printf("\nFim de jogo! O que deseja fazer?");
	printf("\n1 - Jogar novamente");
	printf("\n2 - Menu Principal");
	printf("\n3 - Sair");
	scanf("%d", &option);

	switch (option)
	{
		case 1:
			game(playerName);
			break;
		case 2:
			mainMenu();
			break;
		case 3:
			break;
	}
}

void mainMenu()
{
	int option = 0;

	char playerName[255];
	
	while (option < 1 || option > 3)
	{
		cleanScreen();
		printf("Bem vindo ao Jogo de Batalha Naval");
		printf("\n1 - Jogar");
		printf("\n2 - Sobre o Jogo");
		printf("\n3 - Sair");
		printf("\nEscolha uma opcao e tecle ENTER:\n");

		scanf("%d", &option);

		switch (option)
		{
		case 1:
			// Inicia o jogo
			printf("Qual o seu nome? ");
			scanf("%s", playerName);
			game(playerName);
			break;
		case 2:
			// About
			printf("\nBatalha Naval, Developed by Mario Junior");
			break;
		case 3:
			printf("\nAteh mais");
			break;
		default:
			printf("\nOpcao invalida");
			break;
		}
	}

}

int main()
{
	srand((unsigned)time(NULL));

	mainMenu();
    return 0;
}

