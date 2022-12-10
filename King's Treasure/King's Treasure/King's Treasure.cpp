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
	int randomNumber = 0, wordSize = 0;
	char wordTextCheck[20];
	string word;
	bool wordCheck = false, wordCheckArray = true, checkWordGame = false;
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
	cout << endl << setw(350) << "First Word's Definition: ";
	
	srand(time(0));
	randomNumber = 1 + (rand() % 70);
	word = wordChoice(randomNumber);
	cout << wordDefinition(randomNumber);
	cout << endl << setw(350) << "Answer: ";
	do
	{
		cin.getline(wordTextCheck, 100);
		wordSize = strlen(wordTextCheck);
		switch (wordSize)
		{
		case 3: if ((wordTextCheck[0] == word[0]) && (wordTextCheck[1] == word[1]) && (wordTextCheck[2] == word[2])) { wordCheck = true; } else { wordCheckArray = false; }; break;
		case 4: if ((wordTextCheck[0] == word[0]) && (wordTextCheck[1] == word[1]) && (wordTextCheck[2] == word[2]) && (wordTextCheck[3] == word[3])) { wordCheck = true; } else { wordCheckArray = false; }; break;
		case 5: if ((wordTextCheck[0] == word[0]) && (wordTextCheck[1] == word[1]) && (wordTextCheck[2] == word[2]) && (wordTextCheck[3] == word[3]) && (wordTextCheck[4] == word[4])) { wordCheck = true; } else { wordCheckArray = false; }; break;
		case 6: if ((wordTextCheck[0] == word[0]) && (wordTextCheck[1] == word[1]) && (wordTextCheck[2] == word[2]) && (wordTextCheck[3] == word[3]) && (wordTextCheck[4] == word[4]) && (wordTextCheck[5] == word[5])) { wordCheck = true; } else { wordCheckArray = false; }; break;
		case 7: if ((wordTextCheck[0] == word[0]) && (wordTextCheck[1] == word[1]) && (wordTextCheck[2] == word[2]) && (wordTextCheck[3] == word[3]) && (wordTextCheck[4] == word[4]) && (wordTextCheck[5] == word[5]) && (wordTextCheck[6] == word[6])) { wordCheck = true; } else { wordCheckArray = false; }; break;
		case 8: if ((wordTextCheck[0] == word[0]) && (wordTextCheck[1] == word[1]) && (wordTextCheck[2] == word[2]) && (wordTextCheck[3] == word[3]) && (wordTextCheck[4] == word[4]) && (wordTextCheck[5] == word[5]) && (wordTextCheck[6] == word[6]) && (wordTextCheck[7] == word[7])) { wordCheck = true; } else { wordCheckArray = false; }; break;
		case 9: if ((wordTextCheck[0] == word[0]) && (wordTextCheck[1] == word[1]) && (wordTextCheck[2] == word[2]) && (wordTextCheck[3] == word[3]) && (wordTextCheck[4] == word[4]) && (wordTextCheck[5] == word[5]) && (wordTextCheck[6] == word[6]) && (wordTextCheck[7] == word[7]) && (wordTextCheck[8] == word[8])) { wordCheck = true; } else { wordCheckArray = false; }; break;
		case 10: if ((wordTextCheck[0] == word[0]) && (wordTextCheck[1] == word[1]) && (wordTextCheck[2] == word[2]) && (wordTextCheck[3] == word[3]) && (wordTextCheck[4] == word[4]) && (wordTextCheck[5] == word[5]) && (wordTextCheck[6] == word[6]) && (wordTextCheck[7] == word[7]) && (wordTextCheck[8] == word[8]) && (wordTextCheck[9] == word[9])) { wordCheck = true; } else { wordCheckArray = false; }; break;
		case 11: if ((wordTextCheck[0] == word[0]) && (wordTextCheck[1] == word[1]) && (wordTextCheck[2] == word[2]) && (wordTextCheck[3] == word[3]) && (wordTextCheck[4] == word[4]) && (wordTextCheck[5] == word[5]) && (wordTextCheck[6] == word[6]) && (wordTextCheck[7] == word[7]) && (wordTextCheck[8] == word[8]) && (wordTextCheck[9] == word[9]) && (wordTextCheck[10] == word[10])) { wordCheck = true; } else { wordCheckArray = false; }; break;
		case 12: if ((wordTextCheck[0] == word[0]) && (wordTextCheck[1] == word[1]) && (wordTextCheck[2] == word[2]) && (wordTextCheck[3] == word[3]) && (wordTextCheck[4] == word[4]) && (wordTextCheck[5] == word[5]) && (wordTextCheck[6] == word[6]) && (wordTextCheck[7] == word[7]) && (wordTextCheck[8] == word[8]) && (wordTextCheck[9] == word[9]) && (wordTextCheck[10] == word[10]) && (wordTextCheck[11] == word[11])) { wordCheck = true; } else { wordCheckArray = false; }; break;
		}
		/*for (int i = wordSize - 1; i >= 0; i--)
		{
			if (wordTextCheck[i] % 10 != word[i])
			{
				wordCheckArray = false;
				break;
			}
		}*/
		if (wordCheckArray)
		{
			wordCheck = true;
		}
	} while (wordCheck != true);

}