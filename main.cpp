//by Pavol Adamík

#include <iostream>
using namespace std;

int stav[4][4] = { {0,0,0,1}, {1,2,0,1}, {1,2,2,3}, {3,3,2,3} };
int aktualnyStav = 0;
char vstup;
char zelena[] = { "zelena" };
char cervena[] = { "cervena" };

int main()
{
	cout << "Mozete pouzit klavesy: 0, 1" << endl;
	cout << "V pripade ukoncenia programu, zadajte do niektorej z hodnot klavesu: k " << endl << endl;
	while (vstup != 'k') {
		cout << "Zadaj hodnotu A: ";
		cin >> vstup;

		if (vstup == '0')
		{
			cout << "Zadaj hodnotu B: ";
			cin >> vstup;
			if (vstup == '1')
				//0,1
				aktualnyStav = stav[aktualnyStav][3];
			if (vstup == '0')
				//0,0
				aktualnyStav = stav[aktualnyStav][0];
		}
		else if (vstup == '1')
		{
			cout << "Zadaj hodnotu B: ";
			cin >> vstup;
			if (vstup == '1')
				//1,1
				aktualnyStav = stav[aktualnyStav][2];
			if (vstup == '0')
				//1,0
				aktualnyStav = stav[aktualnyStav][1];
		}
		else
			cout << "Zadali ste nespravne hodnoty, skuste znovu :)" << endl;

		cout << "Automat je v stave: S" << aktualnyStav << endl;

		if (aktualnyStav < 2)
			cout << "Svieti: " << zelena << endl << endl;
		else
			cout << "Svieti: " << cervena << endl << endl;
	}
	return 0;

}