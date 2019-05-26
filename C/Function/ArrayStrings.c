#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STR_SIZE 127

void imprimeTamString(int numStrings, char **strings) {
    printf("\n---Tamanhos---\n");
    for (int i = 0; i < numStrings; i++) printf("String %d - Tamanho = %d\n", i + 1, (int)strlen(strings[i]));
}

int main() {
    int numStrings;
    printf("Deseja entrar com quantas strings? ");
    scanf("%d", &numStrings);
    scanf("%*c");
    char *strings[numStrings];
    for (int i = 0; i < numStrings; i++) {
        printf("String %d = ", i + 1);
        strings[i] = malloc(STR_SIZE + 1);
        fgets(strings[i], STR_SIZE, stdin);
        strings[i][strcspn(strings[i], "\n")] = 0;
    }
    imprimeTamString(numStrings, strings);
}

//https://pt.stackoverflow.com/q/386843/101
