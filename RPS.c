#include "RPS.h"
#include<string.h>

char* playRPS(char player1[], char player2[])
{

	if (strcmp(player1, "Rock") != 0 && strcmp(player1, "Paper") != 0 && strcmp(player1, "Scissors") != 0)
	{
		return "Invalid";
	}


	if (strcmp(player1, player2) == 0)
	{
		return "Draw";
	}


	if (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Rock") == 0)
	{
		return "Player2";
	}

	return "Player1";

}