//Problema C - Vacina

#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    while (N--) {
        char chikungunya[16];
        char dengue[16];
        char zica[16];
        int T;
        scanf("%s", chikungunya);
        scanf("%s", dengue);
        scanf("%s", zica);
        scanf("%d", &T);
        int count = 0;
        int len_chikungunya = strlen(chikungunya);
        int len_dengue = strlen(dengue);
        int len_zica = strlen(zica);
        for (int i = 0; i <= len_chikungunya - T; i++) {
            for (int j = 0; j <= len_dengue - T; j++) {
                for (int k = 0; k <= len_zica - T; k++) {
                    int match = 1;
                    for (int l = 0; l < T; l++) {
                        if (chikungunya[i + l] != dengue[j + l] ||
                            chikungunya[i + l] != zica[k + l]) {
                            match = 0;
                            break;
                        }
                    }
                    if (match) {
                        count++;
                    }
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
