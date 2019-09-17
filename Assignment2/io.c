/*
	Author: Will St. Onge

	Filename: io.c

	Description: Handles IO for the program. Gets data from file stream and outputs text to console.
*/

#include "main.h"

// Get next line of the file
void input(FILE *file, char *home_team, int *HTO, int *HTD, int *HTS, int *HTH, int *HTC, char *visiting_team, int *VTO, int *VTD, int *VTS, int *VTR)
{
	fscanf(file, "%s %d %d %d %d %d %s %d %d %d %d\n",	home_team, HTO, HTD, HTS, HTH, HTC, visiting_team, VTO, VTD, VTS, VTR);
}

// Output results to console
void output(char *home_team, char *visiting_team, int difference)
{
	if (difference >= 0)
		printf("%s beat %s by %d\n", home_team, visiting_team, difference);
	else
		printf("%s beat %s by %d\n", visiting_team, home_team, abs(difference));
}

// Final stat for home win percentage
void summary(int home_wins, int total_games)
{
	float home_win_rate = (float)home_wins / (float)total_games * 100;

	printf("\nOf %d games, %.1f%% were won by the home team", total_games, home_win_rate);
}