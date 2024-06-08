#include <stdio.h>

void rush(int x, int y) {
    // Print the top border
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            printf("#");
        }
        printf("\n");
    }

    // Print the middle section
    for (int i = 0; i < y - 2; i++) {
        for (int j = 0; j < x; j++) {
            printf(" ");
        }
        printf("\n");
    }

    // Print the bottom border
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            printf("#");
        }
        printf("\n");
    }
}

int main() {
    rush(5, 3);
    return 0;
}
