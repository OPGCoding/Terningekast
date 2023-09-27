/* Rød / Svær: 
Lav et program hvor man kan indtaste hvor mange terninger der skal kastes, og få et resultat der giver mening.Ekstra
Sortér resultaterne i numerisk rækkefølge.*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Funktion til at bytte to elementer i en vektor
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Funktion til at udføre Selection Sort på en vektor
void selectionSort(vector<int>& vec) {
    int n = vec.size();

    for (int i = 0; i < n - 1; i++) {
        int min_index = i;

        for (int j = i + 1; j < n; j++) {
            if (vec[j] < vec[min_index]) {
                min_index = j;
            }
        }

        swap(vec[i], vec[min_index]);
    }
}

int main() {
    vector<int> RandomNumberVec;
    int Terningekast;
    
    cout << "Hvor mange terninger vil du kaste: ";
    cin >> Terningekast;

    cout << "Du kastede: " << Terningekast << " terninger. Du slog: ";

    // Initialisér random seed baseret på tid
    srand(time(nullptr));

    for (int i = 0; i < Terningekast; i++) {
        int RandomNumber = (rand() % 6 + 1);
        RandomNumberVec.push_back(RandomNumber);
    }

    // Brug selectionSort-funktionen til at sortere vektoren
    selectionSort(RandomNumberVec);

    for (int res : RandomNumberVec) {
        cout << res << " ";
    }

    cout << endl;

    return 0;
}

