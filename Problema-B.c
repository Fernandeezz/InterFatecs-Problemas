//Problema B - Escolha científica em C

#include <stdio.h>

int main() {
    int N;

    while (1) {
        scanf("%d", &N);

        if (N == -1) {
            break;
        }
        // O mantra de escolha
        const char *mantra = "Mi-nha-mãe-man-dou-eu-es-co-lher-es-te-da-qui-mas-co-mo-sou-de-so-be-di-en-te-vou-es-co-lher-es-te-da-qui";
        int mantraLength = 65; // Comprimento do mantra

        int chosenVehicle = (mantra[N % mantraLength * 2] - 'a' + 1) % N + 1;
        printf("%d\n", chosenVehicle);
    }
    return 0;
}
