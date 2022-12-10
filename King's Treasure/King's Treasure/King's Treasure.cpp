#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cmath>
using namespace std; //temp namespace; it will be changed later

int main()
{
	int input;
	cout << "     "  << "__________________________" << setw(3) << ' ' << "__________________________" << setw(5) << ' ' << "__________________________" << setw(5) << ' ' << "__________________________" << setw(3) << ' ' << "__________________________" << setw(5) << ' ' << "__________________________" << setw(3) << ' ' << "_________________" << setw(3) << ' ' << "__________________________";
	cout << endl << "     " << '|' << setw(25) << '|';
	
	input = _getch();
	if (input == 13)
	{
		system("cls");
	}

}