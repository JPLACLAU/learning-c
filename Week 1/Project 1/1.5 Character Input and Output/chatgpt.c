
#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        // Hacer algo con el car�cter le�do
        printf("Car�cter le�do: %c\n", c);
    }

    printf("Fin del archivo alcanzado.");

    return 0;
}
