#include <stdio.h>

int main() {
    char resultados[6];
    int vitorias = 0;

    for (int i = 0; i < 6; i++) {
        scanf(" %c", &resultados[i]);
        if (resultados[i] == 'V') {
            vitorias++;
        }
    }

    if (vitorias >= 5) {
        printf("1\n");
    } else if (vitorias >= 3) {
        printf("2\n");
    } else if (vitorias >= 1) {
        printf("3\n");
    } else {
        printf("-1\n");
    }

    return 0;
}
