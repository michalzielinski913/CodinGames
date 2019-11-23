#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
	int n;
	int min = 5526;
	bool negative = 0;// the number of temperatures to analyse
	cin >> n; cin.ignore();
	for (int i = 0; i < n; i++) {
		int t; // a temperature expressed as an integer ranging from -273 to 5526
		cin >> t; cin.ignore();
		if (t >= 0)
		{
			if (t <= min)
			{
				min = t;
				negative = 0;
			}
		}
		else
		{
			if (t * (-1) < min)
			{
				min = t * -1;
				negative = 1;
			}
		}

	}
	if (min == 5526 && n != 1)
	{
		min = 0;
	}
	// Write an action using cout. DON'T FORGET THE "<< endl"
	// To debug: cerr << "Debug messages..." << endl;
	if (negative == 1)
	{
		min *= (-1);
	}
	cout << min << endl;

}