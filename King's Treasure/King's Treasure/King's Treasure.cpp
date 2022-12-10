#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cmath>
#include <cstdlib>
#include "Functions.h"
using namespace std; //temp namespace; it will be changed later

int main()
{
	int input, randomNumber = 0; //keyboard key input
	cout << "     "  << "__________________________" << setw(3) << ' ' << "__________________________" << setw(5) << ' ' << "__________________________" << setw(5) << ' ' << "__________________________" << setw(3) << ' ' << "__________________________" << setw(5) << ' ' << "__________________________" << setw(3) << ' ' << "_________________" << setw(3) << ' ' << "__________________________";
	cout << endl << "     " << '|' << setw(25) << '|' << setw(4) << '|';
	
	screenClear(0); //clears the screen

	cout << endl << setw(371) << "________________________________";
	cout << endl << setw(371) << "| Instructions BEFORE YOU PLAY |";
	cout << endl << setw(371) << "|______________________________|";
	cout << endl << setw(414) << "_____________________________________________________________________________________________________________________________";
	cout << endl << setw(290) << '|' << setw(90) << "+ ALWAYS type the first letter of the words in CAPITAL" << setw(34) << '|';
	cout << endl << setw(290) << '|' << setw(65) << '|' << setw(59) << '|';
	cout << endl << setw(290) << '|' << setw(75) << "+ When you press the \"H\" button on the keyboard you will be given a hint ";
	cout << "which will reveal the first letter of the word" << setw(3) << '|';
	cout << endl << setw(290) << '|' << setw(65) << '|' << setw(59) << '|';
	cout << endl << setw(290) << '|' << setw(90) << "+ Every word gives you one random number (from 1 to 9)" << setw(34) << '|';
	cout << endl << setw(290) << '|' << setw(65) << '|' << setw(59) << '|';
	cout << endl << setw(290) << '|' << setw(107) << "+ When you guess all the words you will be given the option to go to the next stage " << setw(17) << '|';
	cout << endl << setw(290) << '|' << setw(95) << "where you will have to use the numbers to guess a password" << setw(29) << '|';
	cout << endl << setw(414) << "|___________________________________________________________________________________________________________________________|";
	
	screenClear(0); //clears the screen

	cout << endl << setw(364) << "Guess If You Can!";
	cout << endl;
	wordChoice(randomNumber);

}