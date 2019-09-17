#include "main.h"

int main()
{
	int predictor1 = 0, predictor2 = 0, predictor3 = 0, predictor4 = 0, predictor5 = 0;
	char home_team[20] = "", visiting_team[20] = "";
	int HTO = 0, HTD = 0, HTS = 0, HTH = 0, HTC = 0, VTO = 0, VTD = 0, VTS = 0, VTR = 0;
	FILE *file;

	fopen_s(&file, "football1.txt", "r");
	
	input(file, home_team, &HTO, &HTD, &HTS, &HTH, &HTC, visiting_team, &VTO, &VTD, &VTS, &VTR);

	printf("%s", home_team);
	
	return 0;
}