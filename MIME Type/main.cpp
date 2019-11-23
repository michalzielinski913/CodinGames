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
	vector<string> extension;
	string type;
	bool found = 0;
	vector<string> typo;
	int N; // Number of elements which make up the association table.
	cin >> N; cin.ignore();
	int Q; // Number Q of file names to be analyzed.
	cin >> Q; cin.ignore();
	for (int i = 0; i < N; i++) {
		string EXT; // file extension
		string MT; // MIME type.
		cin >> EXT >> MT; cin.ignore();
		for_each(EXT.begin(), EXT.end(), [](char& c) {
			c = ::tolower(c);
			});
		extension.push_back(EXT);
		typo.push_back(MT);

	}
	for (int i = 0; i < Q; i++) {
		string FNAME;
		getline(cin, FNAME); // One file name per line.
		type = (FNAME.substr(FNAME.find(".") + 1));
		for_each(type.begin(), type.end(), [](char& c) {
			c = ::tolower(c);
			});

		for (int i = 0; i < N; i++)
		{
			if (type == extension[i])
			{
				cout << typo[i] << endl;
				found = 1;
				break;
			}
		}
		if (!found)
		{
			cout << "UNKNOWN" << endl;
		}
		found = 0;
	}

	// Write an action using cout. DON'T FORGET THE "<< endl"
	// To debug: cerr << "Debug messages..." << endl;


	// For each of the Q filenames, display on a line the corresponding MIME type. If there is no corresponding type, then display UNKNOWN.
}