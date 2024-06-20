#include <stdio.h>

void representar_numero_com_dedos(int n, char mao_esquerda[], char mao_direita[]) {
    if (n <= 5) {
        for (int i = 0; i < n; i++) {
            mao_esquerda[i] = 'I';
        }
        mao_esquerda[n] = '\0';
        mao_direita[0] = '*';
        mao_direita[1] = '\0';
    } else {
        for (int i = 0; i < 5; i++) {
            mao_esquerda[i] = 'I';
        }
        mao_esquerda[5] = '\0';
        for (int i = 0; i < (n - 5); i++) {
            mao_direita[i] = 'I';
        }
        mao_direita[n - 5] = '\0';
    }
}

int main() {
    int n;
    char mao_esquerda[6];
    char mao_direita[6];

    printf("Digite um número para o ogro: ");
    scanf("%d", &n);

    if (n < 0 || n > 10) {
        printf("Número fora do intervalo permitido.\n");
        return 1;
    }

    representar_numero_com_dedos(n, mao_esquerda, mao_direita);

    printf("%s\n", mao_esquerda);
    printf("%s\n", mao_direita);

    return 0;
}
