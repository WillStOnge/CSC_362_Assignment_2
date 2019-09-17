/*
	Author: Will St. Onge

	Filename: main.h

	Description: Header file for the program
*/

#pragma once

#define _CRT_SECURE_NO_WARNINGS // Don't want scanf_s warnings

#include <stdio.h> // For io functions

// All const variable for calculation
#define OFFENSIVE_FACTOR 1.15
#define SPECIAL_TEAMS_FACTOR 1.22
#define HOME_FIELD_ADVANTAGE 1.2
#define OVERALL_FACTOR 1.15
#define OFFENSIVE_WORTH 0.3
#define DEFENSIVE_WORTH 0.24
#define SPECIAL_WORTH 0.17
#define HOME_WORTH 0.11
#define OVERALL_WORTH 0.13

extern void input(FILE *, char *, int *, int *, int *, int *, int *, char *, int *, int *, int *, int *); // Gets values from file stream.
extern void output(char *, char *, int); // Outputs predictions to console.
extern void compute(int, int, int, int, int, int, int, int, int, double *, double *, double *, double *, double *); // Computes the values of all the predictors.
extern void update(int, int *); // Increments second parameter if first parameter is >= 0 (home team won)
extern void score(double, double, double, double, double, double *); // Computes difference in odds between teams.
extern void summary(int, int); // Outputs the total number of games and percentage of games won by home team