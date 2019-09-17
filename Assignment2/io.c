#include "main.h"

void input(FILE *file, char *home_team[20], int *HTO, int *HTD, int *HTS, int *HTH, int *HTC, char *visiting_team[20], int *VTO, int *VTD, int *VTS, int *VTR)
{
	fscanf(file, "%s %d %d %d %d %d %s %d %d %d %d", home_team, HTO, HTD, HTS, HTH, HTC, visiting_team, VTO, VTD, VTS, VTR);
}

void output()
{

}