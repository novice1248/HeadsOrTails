#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char* coin_toss() {
    return rand() % 2 == 0 ? "Heads" : "Tails";
}

int main() {
    char name[100];
    printf("Who are you?\n> ");
    scanf("%99s", name);
    printf("Hello, %s!\n", name);

    srand(time(0));
    printf("Tossing a coin...\n");
    int heads_count = 0;
    int tails_count = 0;

    for (int i = 0; i < 3; i++) {
        const char* result = coin_toss();
        printf("Round %d: %s\n", i + 1, result);
        if (result[0] == 'H') {
            heads_count++;
        } else {
            tails_count++;
        }
    }
    printf("Heads: %d, Tails: %d\n", heads_count, tails_count);
    if (heads_count > tails_count) {
        printf("You won!\n");
    } else {
        printf("You lost!\n");
    }

    return 0;
}
