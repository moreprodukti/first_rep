#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int hui2;
    int i;

    if(argc <= 1) {
        printf("Эй, напиши что-нибудь! Я не буду работать без аргументов >:(\n");
        return 0;
    }

    if(argc > 2) {
        printf("Много аргументов! Мне нужен всего один >:(\n");
        return 0;
    }

    char *hui = argv[1];

    hui2 = atoi(hui);
    if (hui2 == 0) {
        printf("Мне нужен был ключ-число, зачем ты дал мне этот непонятный символ? >:(\n");
    }

    for (i=getchar() ; i != EOF; i=getchar()) {
        i += hui2;
        putchar(i);
    }

    return 0;
}
