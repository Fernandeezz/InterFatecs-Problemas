// Problema B - Escolha científica em C++

#include <iostream>
#include <string>

using namespace std;
int chooseVehicle(int N) {
    string mantra = "Mi-nha-mãe-man-dou-eu-es-co-lher-es-te-da-qui-mas-co-mo-sou-de-so-be-di-en-te-vou-es-co-lher-es-te-da-qui";
    int idx = 0;
    for (int i = 0; i < mantra.length(); i++) {
        if (mantra[i] == '-') {
            idx++;
            if (idx == N) {
                idx = 0;
            }
        }
    }
    return idx + 1;
}
int main() {
    int N;
    while (true) {
        cin >> N;
        if (N == -1) {
            break;
        }
        int chosenVehicle = chooseVehicle(N);
        cout << chosenVehicle << endl;
    }
    return 0;
}
