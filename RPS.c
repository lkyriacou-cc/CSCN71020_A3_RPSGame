#include "RPS.h"
#include<string.h>

char* playRPS(char player1[], char player2[])
{
	if (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Rock") == 0)
	{
		return "Player2";
	}

	return "Player1";

}