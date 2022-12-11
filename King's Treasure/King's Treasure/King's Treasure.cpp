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

	system("Color 0E");
	gameNamePrint();

	screenClear(0); //clears the screen

	system("Color 0C");
	cout << endl << setw(371) << "________________________________";
	cout << endl << setw(371) << "| Instructions BEFORE YOU PLAY |";
	cout << endl << setw(371) << "|______________________________|";
	cout << endl << setw(414) << "_____________________________________________________________________________________________________________________________";
	cout << endl << setw(290) << '|' << setw(90) << "+ ALWAYS type the first letter of the words in CAPITAL" << setw(34) << '|';
	cout << endl << setw(290) << '|' << setw(65) << '|' << setw(59) << '|';
	cout << endl << setw(290) << '|' << setw(75) << "+ When you press the \"H\" button on the keyboard you will be given a hint ";
	cout << "which will reveal the first letter of the word" << setw(3) << '|';
	cout << endl << setw(290) << '|' << setw(65) << '|' << setw(59) << '|';
	cout << endl << setw(290) << '|' << setw(105) << "+ After you guess all the words you will be given 6 random numbers (from 1 to 9)" << setw(19) << '|';
	cout << endl << setw(290) << '|' << setw(65) << '|' << setw(59) << '|';
	cout << endl << setw(290) << '|' << setw(107) << "+ When you guess all the words you will be given the option to go to the next stage " << setw(17) << '|';
	cout << endl << setw(290) << '|' << setw(95) << "where you will have to use the numbers to guess a password" << setw(29) << '|';
	cout << endl << setw(414) << "|___________________________________________________________________________________________________________________________|";
	
	screenClear(0); //clears the screen
	
	system("Color 0E");
	wordGameAuto();

	for (int i = 0; i < 6; i++)
	{
		srand(time(0));
		randomNumberPassword[i] = (rand() % 9) + 1;
	}

	screenClear(0); //clears the sreen
}