#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lerDados(char nomes[][80], float notas[][3], int n) {
    for (int i = 0; i < n; i++) {
        do {
            printf("\nNome: ");
            fgets(nomes[i], 80, stdin);
            nomes[i][strcspn(nomes[i], "\n")] = '\0';
            if (strlen(nomes[i]) == 0)
                printf("Nome vazio! Digite novamente.\n");
        } while (strlen(nomes[i]) == 0);

        for (int j = 0; j < 3; j++) {
            do {
                printf("Nota %d (0 a 10): ", j + 1);
                scanf("%f", &notas[i][j]);
                if (notas[i][j] < 0 || notas[i][j] > 10)
                    printf("Nota invalida!\n");
            } while (notas[i][j] < 0 || notas[i][j] > 10);
        }
        getchar();
    }
}

void calcularMedias(float notas[][3], float *medias, int n) {
    for (int i = 0; i < n; i++) {
        medias[i] = 0;
        for (int j = 0; j < 3; j++)
            medias[i] += notas[i][j];
        medias[i] /= 3;
    }
}

void exibir(char nomes[][80], float notas[][3],
            float medias[], int n) {
    float soma = 0, maior = medias[0];

    printf("\nNome\tNotas\t\tMedia\tSituacao\n");

    for (int i = 0; i < n; i++) {
        printf("%s\t", nomes[i]);
        for (int j = 0; j < 3; j++)
            printf("%.1f ", notas[i][j]);

        printf("\t%.2f\t%s\n", medias[i],
               medias[i] >= 6 ? "Atingiu a meta" : "Abaixo da meta");

        soma += medias[i];
        if (medias[i] > maior)
            maior = medias[i];
    }

    printf("\nMedia geral: %.2f\n", soma / n);
    printf("Maior media: %.2f\nEstudante(s):\n", maior);

    for (int i = 0; i < n; i++)
        if (medias[i] == maior)
            printf("%s\n", nomes[i]);
}

int main() {
    char nomes[10][80];
    float notas[10][3];
    int n;

    do {
        printf("Quantidade de estudantes (1 a 10): ");
        scanf("%d", &n);
        getchar();
    } while (n < 1 || n > 10);

    float *medias = malloc(n * sizeof(float));
    if (medias == NULL) {
        printf("Erro de memoria!\n");
        return 1;
    }

    lerDados(nomes, notas, n);
    calcularMedias(notas, medias, n);
    exibir(nomes, notas, medias, n);

    free(medias);
    return 0;
}
