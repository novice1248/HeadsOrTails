#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char* coin_toss() {
    return rand() % 2 == 0 ? "Heads" : "Tails";
}

int main() {
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

    return 0;
}
