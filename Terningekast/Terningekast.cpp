/* Rød / Svær: 
Lav et program hvor man kan indtaste hvor mange terninger der skal kastes, og få et resultat der giver mening.Ekstra
Sortér resultaterne i numerisk rækkefølge.*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> RandomNumberVec;
	int Terningekast;
	cout << "Hvor mange terninger vil du kaste: ";
	cin >> Terningekast;

	cout << "Du kastede: " << Terningekast << " terninger. Du slog: ";

	for (int i = 0; i < Terningekast; i++) {
		int RandomNumber = (rand() % 6 + 1);
		RandomNumberVec.push_back(RandomNumber);
	}

	sort(RandomNumberVec.begin(), RandomNumberVec.end());
	for (int res : RandomNumberVec) {
		cout << res << " ";
	}
	
}
