/*
	Author: Will St. Onge
	
	Filename: main.c

	Description: Main file for program. Initializes variables, loops through file, and calls other functions
*/

#define FILENAME "football2.txt"

#include "main.h"

// Entry point
main()
{
	char home_team[20] = "", visiting_team[20] = ""; // Team names
	int HTO, HTD, HTS, HTH, HTC, VTO, VTD, VTS, VTR; // Home and visitor variables
	int home_wins = 0, total_games = 0; // Win count
	FILE* file; // File pointer
	double predictor1, predictor2, predictor3, predictor4, predictor5, difference; // More vars for calculation

	// Open file with read only
	fopen_s(&file, FILENAME, "r");

	// Go through each line of the file and do applicable operations on the input
	while (!feof(file))
	{
		// Get input values from the file pointer
		input(file, home_team, &HTO, &HTD, &HTS, &HTH, &HTC, visiting_team, &VTO, &VTD, &VTS, &VTR);

		// Compute numbers
		compute(HTO, HTD, HTS, HTH, HTC, VTO, VTD, VTS, VTR, &predictor1, &predictor2, &predictor3, &predictor4, &predictor5);

		// Calculate a score
		score(predictor1, predictor2, predictor3, predictor4, predictor5, &difference);

		// Update home win percentage
		update((int)difference, &home_wins);

		// Output results to console
		output(home_team, visiting_team, (int)difference);

		// Incremenet game count
		total_games+=1;
	}

	// Output program summary to console
	summary(home_wins, total_games);

	// Close the file
	fclose(file);
}