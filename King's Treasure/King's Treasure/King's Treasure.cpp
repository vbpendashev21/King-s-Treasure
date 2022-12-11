#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>
#include <cmath>
<<<<<<< HEAD
#include "Functions.h"
using namespace std; //temp namespace; it will be changed later

int main()
{
	int input;
	cout << setw(25) << ' ' << "_______" << setw(12) << ' ' << "_______" << setw(10) << ' ' << "___________________________" << setw(10) << ' ' << "_______" << setw(12) << ' ' << "_______" << setw(10) << ' ' << "___________________________";
	cout << endl << setw(25) << ' ' << '|' << setw(5) << ' ' << '|' << setw(11) << ' ' << '/' << setw(7) << '/' << setw(10) << ' ' << '|' << setw(25) << ' ' << '|' << setw(10) << ' ' << '|' << setw(5) << ' ' << '|' << setw(12) << ' ' << '|' << setw(5) << ' ' << '|' << setw(10) << ' ' << '|' << setw(25) << ' ' << '|' << setw(10) << ' ' << "_______";
	cout << endl << setw(25) << ' ' << '|' << setw(5) << ' ' << '|' << setw(10) << ' ' << '/' << setw(7) << '/' << setw(11) << ' ' << "|_________       _________|" << setw(10) << ' ' << '|' << setw(5) << ' ' << '|' << setw(12) << ' ' << '|' << setw(5) << ' ' << '|' << setw(10) << ' ' << "|     ____________________|" << setw(10) << ' ' << '|' << setw(5) << ' ' << '|';
	cout << endl << setw(25) << ' ' << '|' << setw(5) << ' ' << '|' << setw(9) << ' ' << '/' << setw(7) << '/' << setw(21) << ' ' << '|' << setw(7) << ' ' << '|' << setw(19) << ' ' << '|' << setw(5) << ' ' << '|' << setw(12) << ' ' << '|' << setw(5) << ' ' << '|' << setw(10) << ' ' << '|' << setw(5) << ' ' << '|' << setw(30) << ' ' << '|' << setw(5) << ' ' << '|';
	cout << endl << setw(25) << ' ' << '|' << setw(5) << ' ' << '|' << setw(8) << ' ' << '/' << setw(7) << '/' << setw(22) << ' ' << '|' << setw(7) << ' ' << '|' << setw(19) << ' ' << '|' << setw(5) << ' ' << '|' << setw(12) << ' ' << '|' << setw(5) << ' ' << '|' << setw(10) << ' ' << '|' << setw(5) << ' ' << '|' << setw(30) << ' ' << "|__   |";
	cout << endl << setw(25) << ' ' << '|' << setw(5) << ' ' << '|' << setw(7) << ' ' << '/' << setw(7) << '/' << setw(23) << ' ' << '|' << setw(7) << ' ' << '|' << setw(19) << ' ' << '|' << setw(5) << ' ' << '|' << setw(12) << ' ' << '|' << setw(5) << ' ' << '|' << setw(10) << ' ' << '|' << setw(5) << ' ' << '|' << setw(32) << ' ' << '|' << setw(3) << ' ' << '/';
	cout << endl << setw(25) << ' ' << '|' << setw(5) << ' ' << '|' << setw(6) << ' ' << '/' << setw(7) << '/' << setw(24) << ' ' << '|' << setw(7) << ' ' << '|' << setw(19) << ' ' << '|' << setw(5) << ' ' << '|' << setw(12) << ' ' << '|' << setw(5) << ' ' << '|' << setw(10) << ' ' << '|' << setw(5) << ' ' << '|' << setw(32) << ' ' << '/' << setw(2) << ' ' << '/';
	cout << endl << setw(25) << ' ' << '|' << setw(5) << ' ' << '|' << setw(5) << ' ' << '/' << setw(7) << '/' << setw(25) << ' ' << '|' << setw(7) << ' ' << '|' << setw(19) << ' ' << '|' << setw(5) << ' ' << '\\' << setw(12) << ' ' << '|' << setw(5) << ' ' << '|' << setw(10) << ' ' << '|' << setw(5) << ' ' << '|' << setw(31) << ' ' << "/__/";
	cout << endl << setw(25) << ' ' << '|' << setw(5) << ' ' << '|' << setw(4) << ' ' << '/' << setw(7) << '/' << setw(26) << ' ' << '|' << setw(7) << ' ' << '|' << setw(19) << ' ' << '|' << setw(6) << ' ' << '\\' << setw(11) << ' ' << '|' << setw(5) << ' ' << '|' << setw(10) << ' ' << '|' << setw(5) << ' ' << '|'<< setw(44) << ' ' << "___________________________";
	cout << endl << setw(25) << ' ' << '|' << setw(5) << ' ' << '|' << setw(3) << ' ' << '/' << setw(7) << '/' << setw(27) << ' ' << '|' << setw(7) << ' ' << '|' << setw(19) << ' ' << '|' << setw(7) << ' ' << '\\' << setw(10) << ' ' << '|' << setw(5) << ' ' << '|' << setw(10) << ' ' << '|' << setw(5) << ' ' << '|' << setw(45) << '|' << setw(25) << ' ' << '|';
	cout << endl << setw(25) << ' ' << '|' << setw(5) << ' ' << '|' << setw(2) << ' ' << '/' << setw(7) << '/' << setw(28) << ' ' << '|' << setw(7) << ' ' << '|' << setw(19) << ' ' << '|' << setw(8) << ' ' << '\\' << setw(9) << ' ' << '|' << setw(5) << ' ' << '|' << setw(10) << ' ' << '|' << setw(5) << ' ' << '|' << setw(44) << ' ' << "|     ____________________|";
	cout << endl << setw(25) << ' ' << '|' << setw(5) << ' ' << '|' << setw(1) << ' ' << '/' << setw(7) << '/' << setw(29) << ' ' << '|' << setw(7) << ' ' << '|' << setw(19) << ' ' << '|' << setw(9) << ' ' << '\\' << setw(8) << ' ' << '|' << setw(5) << ' ' << '|' << setw(10) << ' ' << '|' << setw(5) << ' ' << '|' << setw(44) << ' ' << '|' << setw(5) << ' ' << '|';
	cout << endl << setw(25) << ' ' << '|' << setw(5) << ' ' << '|' << '/' << setw(7) << '/' << setw(30) << ' ' << '|' << setw(7) << ' ' << '|' << setw(19) << ' ' << '|' << setw(5) << ' ' << '|' << '\\' << setw(3) << ' ' << '\\' << setw(7) << ' ' << '|' << setw(5) << ' ' << '|' << setw(10) << ' ' << '|' << setw(5) << ' ' << '|' << setw(5) << ' ' << "_______________" << setw(24) << ' ' << '|' << setw(5) << ' ' << '|';
	cout << endl << setw(25) << ' ' << '|' << setw(5) << ' ' << setw(1) << ' ' << setw(7) << '/' << setw(31) << ' ' << '|' << setw(7) << ' ' << '|' << setw(19) << ' ' << '|' << setw(5) << ' ' << '|' << setw(2) << '\\' << setw(3) << ' ' << '\\' << setw(6) << ' ' << '|' << setw(5) << ' ' << '|' << setw(10) << ' ' << '|' << setw(5) << ' ' << '|' << setw(5) << ' ' << '|' << setw(13) << ' ' << '|' << setw(24) << ' ' << '|' << setw(5) << ' ' << '|';
	cout << endl << setw(25) << ' ' << '|' << setw(5) << ' ' << setw(1) << ' ' << setw(7) << '\\' << setw(31) << ' ' << '|' << setw(7) << ' ' << '|' << setw(19) << ' ' << '|' << setw(5) << ' ' << '|' << setw(3) << '\\' << setw(3) << ' ' << '\\' << setw(5) << ' ' << '|' << setw(5) << ' ' << '|' << setw(10) << ' ' << '|' << setw(5) << ' ' << '|' << setw(5) << ' ' << "|_________    |" << setw(24) << ' ' << '|' << setw(5) << ' ' << '|';
	cout << endl << setw(25) << ' ' << '|' << setw(5) << ' ' << '|' << '\\' << setw(7) << '\\' << setw(30) << ' ' << '|' << setw(7) << ' ' << '|' << setw(19) << ' ' << '|' << setw(5) << ' ' << '|' << setw(4) << '\\' << setw(3) << ' ' << '\\' << setw(4) << ' ' << '|' << setw(5) << ' ' << '|' << setw(10) << ' ' << '|' << setw(5) << ' ' << '|' << setw(14) << ' ' << '|' << setw(4) << ' ' << '|' << setw(24) << ' ' << '|' << setw(5) << ' ' << '|';
	cout << endl << setw(25) << ' ' << '|' << setw(5) << ' ' << '|' << setw(1) << ' ' << '\\' << setw(7) << '\\' << setw(29) << ' ' << '|' << setw(7) << ' ' << '|' << setw(19) << ' ' << '|' << setw(5) << ' ' << '|' << setw(5) << '\\' << setw(3) << ' ' << '\\' << setw(3) << ' ' << '|' << setw(5) << ' ' << '|' << setw(10) << ' ' << '|' << setw(5) << ' ' << '|' << setw(14) << ' ' << '|' << setw(4) << ' ' << '|' << setw(24) << ' ' << '|' << setw(5) << ' ' << "|____________________";
	cout << endl << setw(25) << ' ' << '|' << setw(5) << ' ' << '|' << setw(2) << ' ' << '\\' << setw(7) << '\\' << setw(28) << ' ' << '|' << setw(7) << ' ' << '|' << setw(19) << ' ' << '|' << setw(5) << ' ' << '|' << setw(6) << '\\' << setw(3) << ' ' << '\\' << setw(2) << ' ' << '|' << setw(5) << ' ' << '|' << setw(10) << ' ' << '|' << setw(5) << ' ' << '|' << setw(14) << ' ' << '|' << setw(4) << ' ' << '|' << setw(24) << ' ' << '|' << setw(25) << ' ' << '|';
	cout << endl << setw(25) << ' ' << '|' << setw(5) << ' ' << '|' << setw(3) << ' ' << '\\' << setw(7) << '\\' << setw(27) << ' ' << '|' << setw(7) << ' ' << '|' << setw(19) << ' ' << '|' << setw(5) << ' ' << '|' << setw(7) << '\\' << setw(3) << ' ' << '\\' << setw(1) << ' ' << '|' << setw(5) << ' ' << '|' << setw(10) << ' ' << '|' << setw(5) << ' ' << '|' << setw(14) << ' ' << '|' << setw(4) << ' ' << '|' << setw(24) << ' ' << "|____________________     |";
	cout << endl << setw(25) << ' ' << '|' << setw(5) << ' ' << '|' << setw(4) << ' ' << '\\' << setw(7) << '\\' << setw(26) << ' ' << '|' << setw(7) << ' ' << '|' << setw(19) << ' ' << '|' << setw(5) << ' ' << '|' << setw(8) << '\\' << setw(3) << ' ' << '\\' << '|' << setw(5) << ' ' << '|' << setw(10) << ' ' << '|' << setw(5) << ' ' << '|' << setw(14) << ' ' << '|' << setw(4) << ' ' << '|' << setw(44) << ' ' << '|' << setw(5) << ' ' << '|';
	cout << endl << setw(25) << ' ' << '|' << setw(5) << ' ' << '|' << setw(5) << ' ' << '\\' << setw(7) << '\\' << setw(25) << ' ' << '|' << setw(7) << ' ' << '|' << setw(19) << ' ' << '|' << setw(5) << ' ' << '|' << setw(9) << '\\' << setw(9) << ' ' << '|' << setw(10) << ' ' << '|' << setw(5) << ' ' << '|' << setw(14) << ' ' << '|' << setw(4) << ' ' << '|' << setw(44) << ' ' << '|' << setw(5) << ' ' << '|';
	cout << endl << setw(25) << ' ' << '|' << setw(5) << ' ' << '|' << setw(6) << ' ' << '\\' << setw(7) << '\\' << setw(24) << ' ' << '|' << setw(7) << ' ' << '|' << setw(19) << ' ' << '|' << setw(5) << ' ' << '|' << setw(10) << '\\' << setw(8) << ' ' << '|' << setw(10) << ' ' << '|' << setw(5) << ' ' << '|' << setw(14) << ' ' << '|' << setw(4) << ' ' << '|' << setw(44) << ' ' << '|' << setw(5) << ' ' << '|';
	cout << endl << setw(25) << ' ' << '|' << setw(5) << ' ' << '|' << setw(7) << ' ' << '\\' << setw(7) << '\\' << setw(23) << ' ' << '|' << setw(7) << ' ' << '|' << setw(19) << ' ' << '|' << setw(5) << ' ' << '|' << setw(11) << '\\' << setw(7) << ' ' << '|' << setw(10) << ' ' << '|' << setw(5) << ' ' << '|' << setw(14) << ' ' << '|' << setw(4) << ' ' << '|' << setw(44) << ' ' << '|' << setw(5) << ' ' << '|';
	cout << endl << setw(25) << ' ' << '|' << setw(5) << ' ' << '|' << setw(8) << ' ' << '\\' << setw(7) << '\\' << setw(22) << ' ' << '|' << setw(7) << ' ' << '|' << setw(19) << ' ' << '|' << setw(5) << ' ' << '|' << setw(12) << '\\' << setw(6) << ' ' << '|' << setw(10) << ' ' << '|' << setw(5) << ' ' << '|' << setw(14) << ' ' << '|' << setw(4) << ' ' << '|' << setw(44) << ' ' << '|' << setw(5) << ' ' << '|';
	cout << endl << setw(25) << ' ' << '|' << setw(5) << ' ' << '|' << setw(9) << ' ' << '\\' << setw(7) << '\\' << setw(13) << ' ' << "________|" << setw(7) << ' ' << "|________" << setw(11) << ' ' << '|' << setw(5) << ' ' << '|' << setw(12) << ' ' << '|' << setw(5) << ' ' << '|' << setw(10) << ' ' << '|' << setw(5) << ' ' << "|______________|" << setw(4) << ' ' << '|' << setw(24) << ' ' << "____________________|" << setw(5) << ' ' << '|';
	cout << endl << setw(25) << ' ' << '|' << setw(5) << ' ' << '|' << setw(10) << ' ' << '\\' << setw(7) << '\\' << setw(11) << ' ' << '|' << setw(25) << ' ' << '|' << setw(10) << ' ' << '|' << setw(5) << ' ' << '|' << setw(12) << ' ' << '|' << setw(5) << ' ' << '|' << setw(10) << ' ' << '|' << setw(25) << ' ' << '|' << setw(24) << '|' << setw(26) << ' ' << '|';
	cout << endl << setw(25) << ' ' << '|' << "_____" << '|' << setw(11) << ' ' << '\\' << "______" << '\\' << setw(10) << ' ' << "|_________________________|" << setw(10) << ' ' << "|_____|" << setw(12) << ' ' << "|_____|" << setw(10) << ' ' << "|_________________________|" << setw(23) << ' ' << "|__________________________|";

	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	cout << " _________________________" << setw(5) << ' ' << "________________________" << setw(5) << ' ' << "_________________________" << setw(18) << ' ' << "/\\" << setw(18) << ' ' << "_________________________" << setw(5) << ' ' << '|' << setw(23) << ' ' << '|' << setw(5) << ' ' << "________________________" << setw(5) << ' ' << "________________________";
	cout << endl << ' ' << setw(12) << ' ' << '|' << setw(17) << ' ' << '|' << setw(23) << ' ' << '|' << setw(5) << '|' << setw(41) << ' ' << '/' << setw(2) << ' ' << '\\' << setw(16) << ' ' << '/' << setw(30) << ' ' << '|' << setw(23) << ' ' << '|' << setw(5) << ' ' << '|' << setw(23) << ' ' << '|' << setw(5) << '|';
	cout << endl << ' ' << setw(12) << ' ' << '|' << setw(17) << ' ' << '|' << setw(23) << ' ' << '|' << setw(5) << '|' << setw(40) << ' ' << '/' << setw(4) << ' ' << '\\' << setw(15) << ' ' << '|' << setw(30) << ' ' << '|' << setw(23) << ' ' << '|' << setw(5) << ' ' << '|' << setw(23) << ' ' << '|' << setw(5) << '|';
	cout << endl << ' ' << setw(12) << ' ' << '|' << setw(17) << ' ' << '|' << setw(23) << ' ' << '|' << setw(5) << '|' << setw(39) << ' ' << '/' << setw(6) << ' ' << '\\' << setw(14) << ' ' << '|' << setw(30) << ' ' << '|' << setw(23) << ' ' << '|' << setw(5) << ' ' << '|' << setw(23) << ' ' << '|' << setw(5) << '|';
	cout << endl << ' ' << setw(12) << ' ' << '|' << setw(17) << ' ' << '|' << setw(23) << ' ' << '|' << setw(5) << '|' << setw(38) << ' ' << '/' << setw(8) << ' ' << '\\' << setw(13) << ' ' << '|' << setw(30) << ' ' << '|' << setw(23) << ' ' << '|' << setw(5) << ' ' << '|' << setw(23) << ' ' << '|' << setw(5) << '|';
	cout << endl << ' ' << setw(12) << ' ' << '|' << setw(17) << ' ' << "|_______________________|" << setw(5) << '|' << setw(37) << ' ' << '/' << setw(10) << ' ' << '\\' << setw(12) << ' ' << '|' << setw(30) << ' ' << '|' << setw(23) << ' ' << '|' << setw(5) << ' ' << "|_______________________|" << setw(5) << '|';
	cout << endl << ' ' << setw(12) << ' ' << '|' << setw(17) << ' ' << '|' << setw(17) << ' ' << '\\' << setw(10) << ' ' << "|________________________" << setw(12) << ' ' << "/____________\\" << setw(11) << ' ' << "\\________________________" << setw(6) << ' ' << '|' << setw(23) << ' ' << '|' << setw(5) << ' ' << '|' << setw(17) << ' ' << '\\' << setw(10) << ' ' << "|_______________________";
	cout << endl << ' ' << setw(12) << ' ' << '|' << setw(17) << ' ' << '|' << setw(18) << ' ' << '\\' << setw(10) << '|' << setw(35) << ' ' << '/' << setw(14) << ' ' << '\\' << setw(35) << ' ' << '\\' << setw(5) << ' ' << '|' << setw(23) << ' ' << '|' << setw(5) << ' ' << '|' << setw(18) << ' ' << '\\' << setw(10) << '|';
	cout << endl << ' ' << setw(12) << ' ' << '|' << setw(17) << ' ' << '|' << setw(19) << ' ' << '\\' << setw(9) << '|' << setw(34) << ' ' << '/' << setw(16) << ' ' << '\\' << setw(34) << ' ' << '|' << setw(5) << ' ' << '|' << setw(23) << ' ' << '|' << setw(5) << ' ' << '|' << setw(19) << ' ' << '\\' << setw(9) << '|';
	cout << endl << ' ' << setw(12) << ' ' << '|' << setw(17) << ' ' << '|' << setw(20) << ' ' << '\\' << setw(8) << '|' << setw(33) << ' ' << '/' << setw(18) << ' ' << '\\' << setw(33) << ' ' << '|' << setw(5) << ' ' << '|' << setw(23) << ' ' << '|' << setw(5) << ' ' << '|' << setw(20) << ' ' << '\\' << setw(8) << '|';
	cout << endl << ' ' << setw(12) << ' ' << '|' << setw(17) << ' ' << '|' << setw(21) << ' ' << '\\' << setw(7) << '|' << setw(32) << ' ' << '/' << setw(20) << ' ' << '\\' << setw(32) << ' ' << '|' << setw(5) << ' ' << '|' << setw(23) << ' ' << '|' << setw(5) << ' ' << '|' << setw(21) << ' ' << '\\' << setw(7) << '|';
	cout << endl << ' ' << setw(12) << ' ' << '|' << setw(17) << ' ' << '|' << setw(22) << ' ' << '\\' << setw(6) << '|' << setw(31) << ' ' << '/' << setw(22) << ' ' << '\\' << setw(31) << ' ' << '|' << setw(5) << ' ' << '|' << setw(23) << ' ' << '|' << setw(5) << ' ' << '|' << setw(22) << ' ' << '\\' << setw(6) << '|';
	cout << endl << ' ' << setw(12) << ' ' << '|' << setw(17) << ' ' << '|' << setw(23) << ' ' << '\\' << setw(4) << ' ' << "|________________________" << setw(6) << ' ' << '/' << setw(24) << ' ' << '\\' << setw(5) << ' ' << "_________________________/" << setw(5) << ' ' << "\\_______________________/" << setw(5) << ' ' << '|' << setw(23) << ' ' << '\\' << setw(4) << ' ' << "|_______________________";

	input = _getch();
	if (input == 13)
	{
		system("cls");
	}
=======
#include <cstdlib>
#include "Functions.h"
using namespace std;

int main()
{
	int randomNumber = 0, wordSize = 0, wordSizeCheck = 0, questionCounter = 1, answerCounter = 0;
	char wordTextCheck[20];
	string word, answerKeep[6];
	bool wordCheck = false, wordCheckArray = true, checkWordGame = false, answerKeepCheck[6];
>>>>>>> 32e5f5947d08f0792ea2fb2d089ebf11515b20ff

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
	
	srand(time(0));
	randomNumber = 1 + (rand() % 70);
	word = wordChoice(randomNumber);
	wordSizeCheck = word.size();
	answerKeep[0] = word;
	
	do
	{
		cout << endl << setw(364) << "Guess If You Can!";
		for (int i = 0; i < questionCounter; i++)
		{
			if (questionCounter >= 2)
			{
				cout << endl << "| ";
				for (int i = 0; i < 300; i++)
				{
					cout << '_';
				}
				cout << " |";
				cout << endl << setw(350) << wordQuestionNumber(questionCounter);
				cout << wordDefinition(randomNumber);
				if (answerKeepCheck[i])
				{
					cout << endl << setw(350) << answerKeep[i];
				}
				else
				{
					cout << endl << setw(350) << "Answer: ";
				}
			}
			else
			{
				cout << endl << setw(350) << wordQuestionNumber(questionCounter);
				cout << wordDefinition(randomNumber);
				cout << endl << setw(350) << "Answer: ";
			}

		}
		
		cin.getline(wordTextCheck, 100);
		wordSize = strlen(wordTextCheck);
		for (int i = 0; i < wordSize; i++)
		{
			if (wordSize > wordSizeCheck || wordSize < wordSizeCheck)
			{
				wordCheckArray = false;
				break;
			}
			else if (wordTextCheck[i] != word[i])
			{
				wordCheckArray = false;
			}
		}
		if (wordSize == 0)
		{
			wordCheckArray = false;
		}
		if (wordCheckArray)
		{
			wordCheck = true;
			answerKeepCheck[answerCounter] = true;
		}
		else
		{
			wordCheckArray = true;
			system("cls");
		}
	} while (wordCheck != true);
	answerCounter++;
	system("cls");

	srand(time(0));
	randomNumber = 1 + (rand() % 70);
	word = wordChoice(randomNumber);
	wordSizeCheck = word.size();
	answerKeep[1] = word;

	do
	{
		cout << endl << setw(364) << "Guess If You Can!";
		for (int i = 0; i < questionCounter; i++)
		{
			if (questionCounter >= 2)
			{
				cout << endl << "| ";
				for (int i = 0; i < 100; i++)
				{
					cout << '_';
				}
				cout << " |";
				cout << endl << setw(350) << wordQuestionNumber(questionCounter);
				cout << wordDefinition(randomNumber);
				if (answerKeepCheck[i])
				{
					cout << endl << setw(350) << answerKeep[i];
				}
				else
				{
					cout << endl << setw(350) << "Answer: ";
				}
			}
			else
			{
				cout << endl << setw(350) << wordQuestionNumber(questionCounter);
				cout << wordDefinition(randomNumber);
				cout << endl << setw(350) << "Answer: ";
			}

		}

		cin.getline(wordTextCheck, 100);
		wordSize = strlen(wordTextCheck);
		for (int i = 0; i < wordSize; i++)
		{
			if (wordSize > wordSizeCheck || wordSize < wordSizeCheck)
			{
				wordCheckArray = false;
				break;
			}
			else if (wordTextCheck[i] != word[i])
			{
				wordCheckArray = false;
			}
		}
		if (wordSize == 0)
		{
			wordCheckArray = false;
		}
		if (wordCheckArray)
		{
			wordCheck = true;
			answerKeepCheck[answerCounter] = true;
		}
		else
		{
			wordCheckArray = true;
			system("cls");
		}
	} while (wordCheck != true);
	answerCounter++;
}