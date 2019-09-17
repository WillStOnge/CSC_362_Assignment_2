/*
	Author: Will St. Onge

	Filename: compute.c

	Description: Computes odds for each team and updates values.
*/

#include "main.h"

// Compute each game chances
void compute(int HTO, int HTD, int HTS, int HTH, int HTC, int VTO, int VTD, int VTS, int VTR, double* out1, double* out2, double* out3, double* out4, double* out5)
{
	*out1 = (double)HTO * OFFENSIVE_FACTOR - (double)VTO;
	*out2 = (double)HTD + 2 - (double)VTO * OFFENSIVE_FACTOR;
	*out3 = (double)HTS * SPECIAL_TEAMS_FACTOR - (double)VTS;
	*out4 = (double)HTH + (double)HTC * HOME_FIELD_ADVANTAGE - (double)VTS;
	*out5 = (double)HTO * (double)HTD * (double)HTH * OVERALL_FACTOR - (double)VTO * (double)VTD * (double)VTR;
}

// Update the home win count
void update(int difference, int *home_wins)
{
	if (difference >= 0)
		*home_wins+=1;
}

// Get a final score for each matchup
void score(double predictor1, double predictor2, double predictor3, double predictor4, double predictor5, double *out)
{
	*out = predictor1 * OFFENSIVE_WORTH + predictor2 * DEFENSIVE_WORTH + predictor3 * SPECIAL_WORTH + predictor4 * HOME_WORTH + predictor5 * OVERALL_WORTH;
}