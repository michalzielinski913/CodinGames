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

	bool boost = 0;
	// game loop
	while (1) {
		int x;
		int y;
		int nextCheckpointX; // x position of the next check point
		int nextCheckpointY; // y position of the next check point
		int nextCheckpointDist; // distance to the next checkpoint
		int nextCheckpointAngle; // angle between your pod orientation and the direction of the next checkpoint
		cin >> x >> y >> nextCheckpointX >> nextCheckpointY >> nextCheckpointDist >> nextCheckpointAngle; cin.ignore();
		int opponentX;
		int opponentY;
		cin >> opponentX >> opponentY; cin.ignore();

		// Write an action using cout. DON'T FORGET THE "<< endl"
		// To debug: cerr << "Debug messages..." << endl;
		if (nextCheckpointAngle >= 90 || nextCheckpointAngle <= -90)
		{
			cout << nextCheckpointX << " " << nextCheckpointY << " 0" << endl;

		}
		else if (nextCheckpointDist >= 4000 && boost == 0)
		{
			cout << nextCheckpointX << " " << nextCheckpointY << " BOOST" << endl;
			boost = 1;
		}
		else if (nextCheckpointDist <= 1000)
		{
			cout << nextCheckpointX << " " << nextCheckpointY << " 70" << endl;
		}
		else
		{
			cout << nextCheckpointX << " " << nextCheckpointY << " 100" << endl;
		}

		// You have to output the target position
		// followed by the power (0 <= thrust <= 100) or "BOOST"
		// i.e.: "x y thrust"
	}
}