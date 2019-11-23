#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/

int main()
{
	int lightX; // the X position of the light of power
	int lightY; // the Y position of the light of power
	int initialTX; // Thor's starting X position
	int initialTY; // Thor's starting Y position
	cin >> lightX >> lightY >> initialTX >> initialTY; cin.ignore();

	int tx = initialTX;
	int ty = initialTY;
	int lx = lightX;
	int ly = lightY;
	// game loop
	while (1) {
		int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
		cin >> remainingTurns; cin.ignore();
		if (tx < lx && ty == ly)
		{
			cout << "E" << endl;
		}
		else if (tx > lx&& ty == ly)
		{
			cout << "W" << endl;
		}
		else if (tx == lx && ty < ly)
		{
			cout << "S" << endl;
		}
		else if (tx == lx && ty > ly)
		{
			cout << "N" << endl;
		}
		else if (tx > lx&& ty < ly)
		{
			cout << "SW" << endl;
			ty++;
			tx--;
		}
		else if (tx < lx && ty < ly)
		{
			cout << "SE" << endl;
			ty++;
			tx++;
		}
		else if (tx<lx && ty>ly)
		{
			cout << "NE" << endl;
			ty--;
			tx++;
		}
		else if (tx > lx&& ty > ly)
		{
			cout << "NW" << endl;
			ty--;
			tx--;
		}


	}
}