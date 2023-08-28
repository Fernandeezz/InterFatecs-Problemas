//Problema E - Prefeito Tecnológico em C

#include <stdio.h>

typedef struct {
    int custo;
    int votos;
} Melhoria;

int main() {
    int N;
    scanf("%d", &N);
    while (N--) {
        int T, L;
        scanf("%d %d", &T, &L);
        Melhoria melhorias[L];
        for (int i = 0; i < L; i++) {
            scanf("%d %d", &melhorias[i].custo, &melhorias[i].votos);
        }
        int maxVotos = 0;
        int custoTotal = 0;
        for (int i = 0; i < L; i++) {
            if (melhorias[i].custo <= T) {
                if (melhorias[i].votos > maxVotos) {
                    maxVotos = melhorias[i].votos;
                    custoTotal = melhorias[i].custo;
                }
            }
        }
        if (maxVotos == 0) {
            printf("NO FUNDS\n");
        } else {
            printf("%d %d\n", maxVotos, T - custoTotal);
        }
    }
    return 0;
}
