#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>
#include <cmath>
#include "Functions.h"
using namespace std;

int main()
{
	int randomNumberPassword[6];

	gameNamePrint();

	screenClear(0); //clears the screen

	gameInstructionsPrint();
	
	screenClear(0); //clears the screen
	
	wordGameAuto();

	screenClear(0); //clears the sreen
	
	passwordGameAuto();
}