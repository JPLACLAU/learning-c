
#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        // Hacer algo con el carácter leído
        printf("Carácter leído: %c\n", c);
    }

    printf("Fin del archivo alcanzado.");

    return 0;
}
