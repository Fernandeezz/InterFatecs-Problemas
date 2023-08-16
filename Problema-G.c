// Problema G - E aí, professor, tem jeito?

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    while (N--) {
        double notas[12];
        double P1, P2;
        for (int i = 0; i < 12; i++) {
            scanf("%lf", &notas[i]);
        }
        scanf("%lf %lf", &P1, &P2);
        // Ordenar as notas das atividades em ordem decrescente
        for (int i = 0; i < 11; i++) {
            for (int j = i + 1; j < 12; j++) {
                if (notas[i] < notas[j]) {
                    double temp = notas[i];
                    notas[i] = notas[j];
                    notas[j] = temp;
                }
            }
        }
        // Calculando a média das 9 melhores notas das atividades
        double somaMelhoresNotas = 0;
        for (int i = 0; i < 9; i++) {
            somaMelhoresNotas += notas[i];
        }
        double mediaAtividades = somaMelhoresNotas / 9.0;
        // Calculando a média ponderada das provas
        double mediaProvas = (P1 + P2) / 2.0;
        // Calculando a nota final
        double notaFinal = (mediaProvas * 0.8) + (mediaAtividades * 0.2);
        if (notaFinal >= 5.75) {
            printf("%.1lf\n", notaFinal);
        } else {
            double reavaliacao = (10.0 - (P1 > P2 ? P1 : P2)) * 2.0; // Substitui a pior nota entre P1 e P2
            double novaNotaFinal = (mediaProvas * 0.8) + (reavaliacao * 0.2);
            if (novaNotaFinal >= 5.75) {
                printf("%.1lf\n", novaNotaFinal);
            } else {
                printf("REPROVADO\n");
            }
        }
    }
    return 0;
}
