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

string wordQuestionNumber(int questionNumber)
{
	switch (questionNumber)
	{
		case 1: return "First Word's Definition: "; break;
		case 2: return "Second Word's Definition: "; break;
		case 3: return "Third Word's Definition: "; break;
		case 4: return "Fourth Word's Definition: "; break;
		case 5: return "Fifth Word's Definition: "; break;
		case 6: return "Sixth Word's Definition: "; break;
	}
}

string wordChoice(int wordNumber)
{
	switch (wordNumber)
	{
		case 1: return "Potato"; break;
		case 2: return "Carrot"; break;
		case 3: return "Bunny"; break;
		case 4: return "Lorry"; break;
		case 5: return "Carpet"; break;
		case 6: return "Bike"; break;
		case 7: return "Car"; break;
		case 8: return "Truck"; break;
		case 9: return "Desk"; break;
		case 10: return "Football"; break;
		case 11: return "Basketball"; break;
		case 12: return "Volleyball"; break;
		case 13: return "English"; break;
		case 14: return "Chemistry"; break;
		case 15: return "Biology"; break;
		case 16: return "School"; break;
		case 17: return "Airport"; break;
		case 18: return "Bank"; break;
		case 19: return "Chicken"; break;
		case 20: return "Beef"; break;
		case 21: return "Tradition"; break;
		case 22: return "Ceremony"; break;
		case 23: return "Headphones"; break;
		case 24: return "Phone"; break;
		case 25: return "Television"; break;
		case 26: return "Social"; break;
		case 27: return "Jeans"; break;
		case 28: return "Programming"; break;
		case 29: return "Window"; break;
		case 30: return "Glass"; break;
		case 31: return "Bedroom"; break;
		case 32: return "Kitchen"; break;
		case 33: return "Project"; break;
		case 34: return "Balcony"; break;
		case 35: return "Airfield"; break;
		case 36: return "House"; break;
		case 37: return "Home"; break;
		case 38: return "Garage"; break;
		case 39: return "Basement"; break;
		case 40: return "Cellar"; break;
		case 41: return "Museum"; break;
		case 42: return "Clothes"; break;
		case 43: return "Vocabulary"; break;
		case 44: return "Grammar"; break;
		case 45: return "People"; break;
		case 46: return "Journey"; break;
		case 47: return "Farmer"; break;
		case 48: return "Engineer"; break;
		case 49: return "Manager"; break;
		case 50: return "Teacher"; break;
		case 51: return "Banana"; break;
		case 52: return "Apple"; break;
		case 53: return "Orange"; break;
		case 54: return "Kiwi"; break;
		case 55: return "Payment"; break;
		case 56: return "Money"; break;
		case 57: return "Anger"; break;
		case 58: return "Underweight"; break;
		case 59: return "Overweight"; break;
		case 60: return "Tall"; break;
		case 61: return "Short"; break;
		case 62: return "Towel"; break;
		case 63: return "Head"; break;
		case 64: return "Nose"; break;
		case 65: return "Wrist"; break;
		case 66: return "Foot"; break;
		case 67: return "Headache"; break;
		case 68: return "Trip"; break;
		case 69: return "Jungle"; break;
		case 70: return "Holiday"; break;
	}
	return 0;
}

string wordDefinition(int wordNumber)
{
	switch (wordNumber)
	{
	case 1: return "Potato"; break;
	case 2: return "Carrot"; break;
	case 3: return "Bunny"; break;
	case 4: return "Lorry"; break;
	case 5: return "Carpet"; break;
	case 6: return "Bike"; break;
	case 7: return "Car"; break;
	case 8: return "Truck"; break;
	case 9: return "Desk"; break;
	case 10: return "Football"; break;
	case 11: return "Basketball"; break;
	case 12: return "Volleyball"; break;
	case 13: return "English"; break;
	case 14: return "Chemistry"; break;
	case 15: return "Biology"; break;
	case 16: return "School"; break;
	case 17: return "Airport"; break;
	case 18: return "Bank"; break;
	case 19: return "Chicken"; break;
	case 20: return "Beef"; break;
	case 21: return "Tradition"; break;
	case 22: return "Ceremony"; break;
	case 23: return "Headphones"; break;
	case 24: return "Phone"; break;
	case 25: return "Television"; break;
	case 26: return "Social"; break;
	case 27: return "Jeans"; break;
	case 28: return "Programming"; break;
	case 29: return "Window"; break;
	case 30: return "Glass"; break;
	case 31: return "Bedroom"; break;
	case 32: return "Kitchen"; break;
	case 33: return "Project"; break;
	case 34: return "Balcony"; break;
	case 35: return "Airfield"; break;
	case 36: return "House"; break;
	case 37: return "Home"; break;
	case 38: return "Garage"; break;
	case 39: return "Basement"; break;
	case 40: return "Cellar"; break;
	case 41: return "Museum"; break;
	case 42: return "Clothes"; break;
	case 43: return "Vocabulary"; break;
	case 44: return "Grammar"; break;
	case 45: return "People"; break;
	case 46: return "Journey"; break;
	case 47: return "Farmer"; break;
	case 48: return "Engineer"; break;
	case 49: return "Manager"; break;
	case 50: return "Teacher"; break;
	case 51: return "Banana"; break;
	case 52: return "Apple"; break;
	case 53: return "Orange"; break;
	case 54: return "Kiwi"; break;
	case 55: return "Payment"; break;
	case 56: return "Money"; break;
	case 57: return "Anger"; break;
	case 58: return "Underweight"; break;
	case 59: return "Overweight"; break;
	case 60: return "Tall"; break;
	case 61: return "Short"; break;
	case 62: return "Towel"; break;
	case 63: return "Head"; break;
	case 64: return "Nose"; break;
	case 65: return "Wrist"; break;
	case 66: return "Foot"; break;
	case 67: return "Headache"; break;
	case 68: return "Trip"; break;
	case 69: return "Jungle"; break;
	case 70: return "Holiday"; break;
	}
	return 0;
}