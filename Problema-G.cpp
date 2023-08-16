// Problema G - E aí, professor, tem jeito?

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;
int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        vector<double> atividades(12);
        double p1, p2;
        double mediaMelhoresAtividades = 0.0;
        for (int j = 0; j < 12; j++) {
            cin >> atividades[j];
        } 
        cin >> p1 >> p2;
        sort(atividades.rbegin(), atividades.rend());
        for (int j = 0; j < 9; j++) {
            mediaMelhoresAtividades += atividades[j];
        }
        mediaMelhoresAtividades /= 9.0;
        double notaFinal = (p1 + p2) * 0.4 + mediaMelhoresAtividades * 0.2;
        cout << fixed << setprecision(1);
        if (notaFinal < 5.75) {
            double notaReavaliacao;
            cin >> notaReavaliacao;
            double novaNotaFinal = min((p1 + p2 - min(p1, p2) + notaReavaliacao) * 0.4 + mediaMelhoresAtividades * 0.2, 10.0);
            if (novaNotaFinal >= 5.75) {
                cout << novaNotaFinal << endl;
            } else {
                cout << "REPROVADO" << endl;
            }
        } else {
            cout << notaFinal << endl;
        }
    }
    return 0;
}
