#pragma once
#include <iostream>
using namespace std;

void screenClear(int input)
{
	cout << endl << setw(370) << "Press \"Enter\" to continue...";
	do
	{
		input = _getch();
	} while (input != 13);
	if (input == 13)
	{
		system("cls"); //clearing the screen
	}
}

void wordChoice(int tempNumber)
{
	switch (tempNumber)
	{
		case 1: cout << '1'; break;
		case 2: cout << '2'; break;
	}
}