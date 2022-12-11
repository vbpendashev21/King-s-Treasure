#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>
#include <cmath>
#include <cstdlib>
#include "Functions.h"
using namespace std;

int main()
{
	int randomNumber = 0, wordSize = 0, wordSizeCheck = 0, questionCounter = 1, answerCounter = 0;
	char wordTextCheck[20];
	string word, answerKeep[6];
	bool wordCheck = false, wordCheckArray = true, checkWordGame = false, answerKeepCheck[6];

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